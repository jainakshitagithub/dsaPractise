#include <bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m){
    int i = 0;
    int j = 0;
    int k = 0;
    int result[n + m];
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            result[k] = arr1[i];
            i++;k++;
        }
        else{
            result[k] = arr2[j];
            j++;k++;
        }
    }
    while(i<n){
        result[k] = arr1[i];
        i++;k++;
    }
    while(j<m){
        result[k] = arr2[j];
        j++;k++;
    }
    for(int i = 0 ; i<n+m ; i++)cout<<result[i]<<" ";
    cout<<endl;

    for(int i=0 ; i<n ; i++){
       arr1[i] = result[i];
    }

    for(int i=0 ; i<m ; i++){
    arr2[i] = result[n+i];
    }
}

int main()
{
    long long arr1[] = {0, 3, 5, 7}, arr2[] = {1, 2, 6, 8, 9};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    merge(arr1, arr2, n, m);
    for(int i = 0 ; i<n ; i++)cout<<arr1[i]<<" ";
    cout<<endl;

    for(int i = 0 ; i<m ; i++)cout<<arr2[i]<<" ";
    cout<<endl;


    return 0;
}