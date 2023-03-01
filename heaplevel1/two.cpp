#include<bits/stdc++.h>
using namespace std;

vector<int> kthsortedArray(int arr[] , int n , int k)
{
     priority_queue<int , vector<int> , greater<int> > minheap;
    vector<int> res;
 for(int i=0 ; i<n ; i++)
 {
    minheap.push(arr[i]);
    if(minheap.size()>k)
    {
        res.push_back(minheap.top());
        minheap.pop();
    }
 }
 while(minheap.size()>0){
     res.push_back(minheap.top());
        minheap.pop();
 }
 return res;
}
int main(){
    int arr[] = {6,5,3,2,8,10,9};
     int n = sizeof(arr)/sizeof(int);
     int k ;
     cin>>k;


    vector<int> ans = kthsortedArray(arr ,  n , k);
    for(int i=0 ; i<ans.size() ; i++)
    {
          cout<<ans[i]<<" ";
    }
    cout<<endl; 
     return 0;
}