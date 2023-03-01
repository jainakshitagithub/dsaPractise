#include<bits/stdc++.h>
using namespace std;

//Find floor of an element
 int findFloorElement(vector<int> arr , int k){
    int start = 0;
    int end = arr.size()-1;
    int res = -1;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==k)return arr[mid];

        if(arr[mid]<k){
            res = arr[mid];
            start = mid+1;
        }
        else if(arr[mid]>k){
            end = mid-1;
        }
    }
    return res;
 }
int main(){ 
    vector<int> arr = {1,2,3,6,10,14};
    int k = 5;
    int res = findFloorElement(arr , k);//Greatest element which is smallest than 5
    cout<<res;
     return 0;
}