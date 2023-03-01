#include<bits/stdc++.h>
using namespace std;

queue<int>_push(int arr[],int n)
{
   //return a queue with all elements of arr inserted in it
   queue<int> q;
   for(int i=0 ; i<n ; i++)
   {
    q.push(arr[i]);
   }
   return q;
}


void _pop(queue<int>s)
{
    //print front and dequeue for each element until it becomes empty

    while(!s.empty())
    {
        cout<<s.front()<<" ";
        s.pop();
    }
} 

int main(){ 
    int arr[] = {1,6,43,1,2,0,5};
    int n = 7;
    queue<int> q = _push(arr , n);

    _pop(q);
     return 0;
}