#include<bits/stdc++.h>
using namespace std;

void printSumOfSubsequences(int arr[] , int n , int ind , vector<int> result)
{
if(ind==n)
{
    int sum = 0;
for(int &i : result)
{
    cout<<i<<" ";
    sum = sum+i;
}
if(result.size()==0)
cout<<"{} ";
cout<< "--> "<<sum<<" ";
cout<<endl;
return;

}

result.push_back(arr[ind]);
printSumOfSubsequences(arr , n , ind+1 , result);

result.pop_back();
printSumOfSubsequences(arr , n , ind+1 , result);

}
int main(){ 
    int arr[] = {3,1,2};
    vector<int> v;
    printSumOfSubsequences(arr , 3 , 0 , v);
     return 0;
}