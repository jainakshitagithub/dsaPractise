#include<bits/stdc++.h>
using namespace std;

//kth smallest element
int kthsmallest(int arr[], int n, int k)
    {
     priority_queue <int> pq;
     for(int i=0 ; i<n ; i++)
     {
          pq.push(arr[i]);
          if(pq.size()>k)
          {
               pq.pop();
          }
     }
     return pq.top();
    }

 vector<int> kLargest(int arr[], int n, int k)
    {
     priority_queue<int , vector<int> , greater<int> > minheap;
      priority_queue <int> pq;
     vector<int> v;
     for(int i=0 ; i<n ; i++)
     {
          minheap.push(arr[i]);
          if(minheap.size()>k)
               minheap.pop();
     }
    while(minheap.size()>0)
    {
     pq.push(minheap.top());
      minheap.pop();
    }
     while(pq.size()>0)
    {
     v.push_back(pq.top());
      pq.pop();
    }
    
     return v;
    }


int main(){ 
     int arr[] = {5,12,787,1,23};
     int n = sizeof(arr)/sizeof(int);
     int k ;
     cin>>k;

//      int result =  kthsmallest(arr , n , k);
//     cout<<result<<endl;
    vector<int> maxi = kLargest(arr ,  n , k);
    for(int i=0 ; i<maxi.size() ; i++)
    {
          cout<<maxi[i]<<" ";
    }
    cout<<endl;
    

     return 0;
}