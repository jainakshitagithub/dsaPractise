#include<bits/stdc++.h>
using namespace std;

int bitonic(vector<int> arr){
     int n = arr.size();
int low = 0;
int high = n-1;
while(low<=high){
     int mid = low + (high-low)/2;
     if(mid>0 && mid<n){
     if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
          return arr[mid];
     }
     else if(arr[mid-1]>arr[mid]){
          high = mid-1;
     }
     else low = mid+1;
     }
     else if(mid == 0){
          if(arr[mid]>arr[mid+1])return arr[0];
     }
     else if(mid == n-1){
          if(arr[mid]>arr[mid-1])return arr[n-1];
     }
}
return 0;
}

int main(){ 
     vector<int> arr = {1,3,8,12,4,2};
     int ans = bitonic(arr);
     cout<<ans<<endl;
     return 0;
}