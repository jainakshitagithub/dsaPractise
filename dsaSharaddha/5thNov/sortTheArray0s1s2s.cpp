#include<bits/stdc++.h>
using namespace std;
//Dutch National Flag Algorithm
void sortColors(vector<int> &arr){
int low = 0;
int high = arr.size()-1;
int mid = 0;
while(mid<=high){
if(arr[mid]==0){
    swap(arr[low++] , arr[mid++]);
}
else if(arr[mid]==1){
    mid++;
}
else swap(arr[mid] , arr[high--]);
}

}
int main(){ 
    vector<int> arr = {0,1,1,2,0,2,2,1,0,1,1,1,2,2,0};
    sortColors(arr);
    for(int i : arr)cout<<i<<" ";
    cout<<endl;
     return 0;
}