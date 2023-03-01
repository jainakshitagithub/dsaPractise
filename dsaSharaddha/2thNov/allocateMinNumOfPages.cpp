#include<bits/stdc++.h>
using namespace std;

bool isValid(int max , vector<int> arr , int n , int k){
    int student = 1;
    int sum = 0;
    for(int i=0 ; i<n ; i++){
        sum = sum + arr[i];
        if(sum>max){
            student++;
            sum = arr[i];
        }
        if(student>k)return false;
    }
    return true;
}

int allocateMinNumOfPages(vector<int> arr , int n , int k){
    int maxElement = 0;
    int total = 0;
    int res = -1;
    if(k>n)return res;
    for(int i=0 ; i<n ; i++){
        maxElement = max(maxElement , arr[i]);
        total = total + arr[i];
    }
    int low = maxElement;
    int high = total;
     
     //Binary Search
     while(low<=high){
        int mid = low + (high-low)/2;
        if(isValid(mid , arr , n , k)){
            res = mid;
            high = mid-1;
        }
        else  low = mid+1;

     }
     return res;
}
int main(){ 
    vector<int> arr = {10,20,30,40};
    int k;
    cin>>k;
    int n = arr.size();
    int res = allocateMinNumOfPages(arr, n , k);
    cout<<res<<endl;
     return 0;
}