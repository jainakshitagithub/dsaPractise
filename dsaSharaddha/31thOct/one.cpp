#include<bits/stdc++.h>
using namespace std;
//Number of times a sorted array is rotated

int numTimesRotatedArray(vector<int> arr){
    int n = arr.size();
    int start = 0;
    int end = n-1;

    while(start<=end){

        if(arr[start]<=arr[end])return start;

        int mid = start + (end-start)/2;


       //in the circular manner
        int next = (mid+1)%n;
        int prev =  (mid + n-1)%n;

        //finding the index of the minimun element
        if(arr[mid]<=arr[next] && arr[mid]<=arr[prev])return mid;


       //moving in the unsorted reqion of the array
         else if(arr[mid]<=arr[end]){
            end = mid-1;
        }

        else if(arr[start]<=arr[mid]){
            start = mid+1;
        }
       

    }
    return -1;
}


int main(){ 

    vector<int> arr = {11,12,15,18,2,5,6,8};
    int ans = numTimesRotatedArray(arr);
    cout<<ans;


     return 0;
}