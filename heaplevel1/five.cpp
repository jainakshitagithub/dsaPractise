#include<bits/stdc++.h>
using namespace std;

int minimunCost(int arr[] , int n )
{ 
    priority_queue<int , vector<int> , greater<int> > mini;
    for(int i=0 ; i<n ; i++)
    {
        mini.push(arr[i]);
    }
    int cost = 0;
    while(mini.size()>=2)
    {
        int first = mini.top();
        mini.pop();
        int second = mini.top();
        mini.pop();
        cost  = cost + first + second;
        mini.push(first + second);
    }
    return cost;
}
int main(){ 
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    int res = minimunCost(arr , n);
    cout<<res<<endl;
    
     return 0;
}