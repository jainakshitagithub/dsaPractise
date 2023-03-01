#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x, int k)
{
   for(int i=0 ; i<n ; i++){
    if(arr[i]==x)return i;
   }
   return -1;
}

int main(){ 
    int  arr[ ] = {4, 5, 6, 7, 6}, k = 1 ,x = 6;
    int n = sizeof(arr)/sizeof(arr[0]);
        int res = search(arr , n , x , k);
        cout<<res<<endl;
     return 0;
}