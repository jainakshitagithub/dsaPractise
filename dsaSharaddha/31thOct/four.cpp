#include<bits/stdc++.h>
using namespace std;

int findCeilElement(vector<int> arr , int k){
    int start = 0;
    int end = arr.size()-1;
    int res = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==k)return arr[mid];

        if(arr[mid]>k){
            res = arr[mid];
            end = mid-1;
        }
        else start = mid+1;
    }
    return res;
}
int main(){ 
    vector<int> arr = {1,2,3,10,14};
    int k = 5;
    int res = findCeilElement(arr , k); //Smallest element which is greater than 5
    cout<<res;
     return 0;
}