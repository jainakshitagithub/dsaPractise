#include<bits/stdc++.h>
using namespace std;

int findNearlySortedArr(vector<int> arr ,int start , int end  , int k){
    int n = arr.size();

    while(start<=end){
        int mid = start  + (end-start)/2;
        if(arr[mid]==k)return mid;
        if(mid-1>=start && arr[mid-1]==k)return mid-1;
        if(mid+1<=end && arr[mid+1]==k)return mid+1;

        if(arr[mid]<k){start = mid+2;
        // return findNearlySortedArr(arr , mid+2 , end , k);
        }
        else {end = mid-2;
        // return findNearlySortedArr(arr , start , mid-2 , k);
        }
    }
    return -1;
}
int main(){ 
    vector<int> arr = {50,10,30,20,40};
    int k = 30;
    int n = arr.size();
    int res = findNearlySortedArr(arr , 0 , n-1, k);
    cout<<res;
     return 0;
}