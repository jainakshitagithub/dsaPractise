#include<bits/stdc++.h>
using namespace std;

int peakElement(vector<int> arr){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(mid>0 && mid<n-1){
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid-1]>arr[mid]){
                high = mid-1;
            }
            else if(arr[mid+1]>arr[mid]){
                low = mid+1;
            }
        }
        else if(mid==0){
            if(arr[mid]>arr[mid+1])return mid;
        }
        else if(mid==n-1){
            if(arr[mid]>arr[mid-1])return mid;
        }
    }
    return 0;
}
int main(){ 
    vector<int> arr = {5,10,20,15};
    int ans = peakElement(arr);
    cout<<ans<<endl;
     return 0;
}