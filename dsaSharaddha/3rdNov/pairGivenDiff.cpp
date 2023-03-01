#include<bits/stdc++.h>
using namespace std;

bool findPair(int arr[], int size, int n){
    // unordered_set<int> list;
    // int x;
    // for(int i=0 ; i<size ; i++){
    //     if(arr[i]<n)x = arr[i] + n;
    //     else x = arr[i]-n;

    //     if(list.count(x))return true;
    //     else list.insert(arr[i]);
    // }
    //     return 0;

      int i=0,j=1;
   sort(arr,arr+size);
   
   while(i<size && j <size)
   {
       if(abs(arr[i]-arr[j])==n&&j!=i)
           return true;
       else if(abs(arr[i]-arr[j]) <n)
           j++;
       else
           i++;
   }
   return false;  
}

int main(){ 
    int arr[] = {90, 70, 20, 80, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool ans = findPair(arr , n , 45);
    cout<<ans;
     return 0;
}