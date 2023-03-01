#include<bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    pair<int , int> res;
    int low = 0;
    int high = n-1;
    int floor = -1;
    int ceil = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==x){
            res.first = arr[mid];
            res.second = arr[mid];
            return res;
        }
        else if(arr[mid]<x){
            floor = arr[mid];
            low = mid+1;
        }
        else {
            ceil = arr[mid];
            high = mid-1;
            }
    }

    res.first = floor ; res.second = res.second = ceil;
    
    return res;
}

int main(){ 
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k ;
    cin>>k;
    pair<int , int> ans = getFloorAndCeil(arr , n , k);
    cout<<ans.first<<" "<<ans.second<<endl;
     return 0;
}