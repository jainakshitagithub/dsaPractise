#include<bits/stdc++.h>
using namespace std;


int k1k2smallest(int arr[] , int n , int k1 , int k2)
{
    priority_queue<int> maxi1;
    priority_queue<int> maxi2;
    int total = 0;

    int first , second;
    for(int i=0 ; i<n ; i++)
    {
        maxi1.push(arr[i]);
        if(maxi1.size()>k1)
        {
            maxi1.pop();
            
        }
        
    }
        for(int i=0 ; i<n ; i++)
    {
        maxi2.push(arr[i]);
        if(maxi2.size()>k2)
        {
            maxi2.pop();
            
        }
        
    }

first = maxi1.top();
second = maxi2.top();

    for(int i=0 ; i <n ; i++)
    {
        if(arr[i]>first && arr[i]<second)
        {
            total = total + arr[i];
        }
    }
    return total;
}
int main(){ 
    int arr[] = {1,3,12,5,15,11};
    int n = sizeof(arr)/sizeof(int);
    cout<<n<<endl;
    int k1 , k2;
    cin>>k1;
    cin>>k2;
    int res = k1k2smallest(arr , n , k1 , k2);
    cout<<res<<endl;
     return 0;
}