#include<bits/stdc++.h>
using namespace std;

    int searchInSorted(int arr[], int N, int K) 
    { 
       int l = 0;
       int r = N-1;
       while(l<=r)
       {
        int mid = (l+r)/2;
        if(K==arr[mid])
        return 1;

        else if(K<arr[mid])
        r = mid-1;

        else
        l = mid+1;
       }
       return -1;
    }

int main(){ 
    int arr[] = {1,3,4,5,6};
    int N  = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    int result = searchInSorted(arr , N , k);
    cout<<result;

     return 0;
}