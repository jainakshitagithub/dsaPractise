#include<bits/stdc++.h>
using namespace std;

        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int i=0;//arr1
            int j=0;//arr2
            int k=0;
            while(i<n && j<m){
                if(arr1[i]<arr2[j]){
                    
                }
            }
        } 

int main(){ 
    long long arr1[] = {1,3,5,7};
    long long arr2[] = {0,2,6,8,9};
    int n =4 , m=5;
    merge(arr1, arr2 , n , m);
    for(int i=0 ; i<n ; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

     for(int i=0 ; i<n ; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
     return 0;
}