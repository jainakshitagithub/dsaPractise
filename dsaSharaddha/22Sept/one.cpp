#include<bits/stdc++.h>
using namespace std;

bool pairInSortedRotated(int arr[], int n, int x)
{
    int i;
    for( i=0 ; i<n ; i++)
    {
        if(arr[i]>arr[i+1])
        break;
    }
    int l = (i+1)%n;
    int r = i;
    while(l!=r)
    {
        if(arr[l]+arr[r]==x)
        return true;
        else if(arr[l]+arr[r]<x)
        l = (l+1)%n;
        else
        r = (r+n-1)%n;
    }
    return false;
}
int main(){ 
    int arr[] = {11, 15, 6, 38, 9, 10} , X = 16;
    int n =  sizeof(arr)/sizeof(int);
    bool res = pairInSortedRotated(arr , n , X);
    cout<<res<<endl;
     return 0;
}