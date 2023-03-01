#include<bits/stdc++.h>
using namespace std;

vector<int> maximunSumSubarray(int arr[] , int n , int k)
{
    int i = 0 ,  j = 0;
    list<int> l;
    vector<int> ans;

    while(j<n)
    {
        while(l.size()>0 && l.back()<arr[j])
        {
            l.pop_back();
        }
        l.push_back(arr[j]);

        cout<<"i : "<<i<<" j : "<<j<<endl;

        if(j-i+1 <k)
        j++;
    
        else if(j-i+1==k)
        {
            ans.push_back(l.front());
            if(arr[i]==l.front())
            l.pop_front();
            i++;j++;
        }
    }
    return ans;
}
int main(){ 
    int arr[] = {1,3,-1,-3,5,3,6,7};
    int n = sizeof(arr)/sizeof(int);

    int k;
    cin>>k;
    vector<int> res = maximunSumSubarray(arr , n , k);
    for(int &i : res)
    {
        cout<<i<<" ";
    }
    cout<<endl;
     return 0;
}