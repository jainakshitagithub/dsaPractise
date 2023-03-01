#include<bits/stdc++.h>
using namespace std;


//Linear Time Complexity
bool checkReverse(vector<int> arr){
 int x = -1;
 int y = -1;
 int n =arr.size();
 for(int i=0 ; i<n-1 ; i++){
    if(arr[i]>arr[i+1]){
        if(x==-1)x = i;
        y = i+1;
    }
 }
 if(x!=-1){
    reverse(arr.begin()+x , arr.begin()+y+1);
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i]>arr[i+1])return false;
    }
 }
 return true;
}

int main(){ 
    vector<int> arr = {1, 2, 5, 4, 3};
    bool res = checkReverse(arr);
    cout<<res<<endl;
     return 0;
}