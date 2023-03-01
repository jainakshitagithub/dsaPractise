#include<bits/stdc++.h>
using namespace std;

   void sortIt(long long arr[], long long n)
    {
       vector<int> v;
       sort(arr , arr+n , greater<int>());
       for(int i=0 ; i<n ; i++){
        if(arr[i]%2!=0)
        v.push_back(arr[i]);
       }
       sort(arr , arr+n);
       for(int i=0 ; i<n ; i++){
        if(arr[i]%2==0)v.push_back(arr[i]);
       }
       for(int i=0 ; i<n ; i++){
        arr[i] = v[i];
       }

    }

int main(){ 
    long long  arr[] = {1,2,3,5,4,7,10};
    sortIt(arr , 7 );
    for(int i=0 ; i<7 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

     return 0;
}