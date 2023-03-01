#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[] , int n , int i)
{
    int largest = i;
     int left = 2*i;
     int right = 2*i+1;

    if(left<=n && arr[largest]<arr[left])
    {
        largest = left;
    }
    if(right<=n && arr[largest]<arr[right])
    {
        largest = right;
    }

    if(largest != i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr , n , largest);
    }
    
}

void heapSort(int arr[] , int n)
{
    int size = n;
   while(size > 1)
   {
    //step1
    swap(arr[size] , arr[1]);
    size--;

    //step2
    heapify(arr , size , 1);
   }

}
int main(){ 
    int arr[] = {-1 ,54,53,55,52,50};
    int n = 6;
    for(int i = n/2 ; i>0 ; i--)
    {
        heapify(arr , n , i);
    }

    for(int i = 1 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    heapSort(arr , n);
    cout<<"Printing the sorted Array"<<endl;
    for(int i=1 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    };
    cout<<endl;

    cout<<"Priority queue starts here"<<endl;
    priority_queue<int> pq;
    pq.push(4);
    pq.push(5);
    pq.push(3);
    pq.push(2);

    cout<<"element at top"<<pq.top()<<endl;
    pq.pop();
    cout<<"element at top"<<pq.top()<<endl;
    cout<<"Size : "<<pq.size()<<endl;
    if(pq.empty())
    {
        cout<<"pq is empty"<<endl;
    }
    else{
        cout<<"pq is not empty"<<endl;
    }

    priority_queue<int , vector<int> , greater<int>> minheap;
     minheap.push(4);
    minheap.push(5);
    minheap.push(3);
    minheap.push(2);

    cout<<"element at top"<<minheap.top()<<endl;
    minheap.pop();
    cout<<"element at top"<<minheap.top()<<endl;
    cout<<"Size : "<<minheap.size()<<endl;
    if(minheap.empty())
    {
        cout<<"minheap is empty"<<endl;
    }
    else{
        cout<<"minheap is not empty"<<endl;
    }







     return 0;
}