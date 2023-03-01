#include<bits/stdc++.h>
using namespace std;

int findMinDiff(int arr[], int n, int m)
{
    if(m==0 || n==0)return 0;
    if(m>n)return -1;
    int minDiff = INT_MAX;
    sort(arr , arr+n);
    for(int i=0 ; i+m-1<n ; i++)
    {
        int diff = arr[i+m-1] - arr[i];
        if(diff<minDiff)minDiff = diff;
    }
    return minDiff;
    
}

int main(){ 
    int arr[] = {7,3,2,4,9,12,56};
    //2 3 4 7 9 12 56
    int n = sizeof(arr)/sizeof(int);
    int k ;
    cin>>k;
    int res = findMinDiff(arr , n , k);
    cout<<res<<endl;
     return 0;
}