#include<bits/stdc++.h>
using namespace std;

pair<int,int> rowColumnWise(vector<vector<int>> arr , int key){
int n = arr.size();
int m =arr[0].size();
int i=0;
int j=m-1;
pair<int,int> p;
while(i>=0 && i<n && j>=0 && j<m){
    if(arr[i][j]==key){
         p = {i , j};
         return p;
    }
    else if (arr[i][j]>key)j--;
    else i++;
}
p = {-1 , -1};
return p;
}
int main(){ 
    vector<vector<int>> arr = {{10,20,30,40} , {15,25,35,45} , {27,29,37,48} , {32,33,39,50}};
    int key;
    cin>>key;
    pair<int,int> ans = rowColumnWise(arr , key);
    cout<<ans.first<<" "<<ans.second<<endl;
     return 0;
}