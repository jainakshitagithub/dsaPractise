#include<bits/stdc++.h>
using namespace std;

void printAllSubsequences(int arr[] , int n , int ind , vector<int> result  )
{
if(ind == n)
{
for(int &i : result)
cout<<i<<" ";

if(result.size()==0)
cout<<"{}";
cout<<endl;

return;
}

//Pick the element
result.push_back(arr[ind]);
printAllSubsequences(arr , n  , ind+1  , result);

//Do not pick the element
result.pop_back();
printAllSubsequences(arr , n  , ind+1  , result);

}

int main(){ 
    int arr[] = {3,1,2};
    vector<int> result;
    printAllSubsequences(arr , 3 , 0 , result);
     return 0;
}