#include<bits/stdc++.h>
using namespace std;

int minimunDiffElement(vector<int> arr , int k){
int low = 0 ;
int high = arr.size()-1;
while(low<=high){
    int mid = low + (high-low)/2;
    if(arr[mid]==k)return arr[mid];
    else if(arr[mid]<k)low = mid+1;
    else high = mid-1;
}
int first = abs(arr[low]-k);
int second = abs(arr[high]-k);

if(first<second)return arr[low];
else return arr[high];
return -1;
}
int main(){ 
    vector<int> arr = {1,3,8,10,15};
    int k = 12;
    int res = minimunDiffElement(arr , k);
    cout<<res<<endl;
     return 0;
}