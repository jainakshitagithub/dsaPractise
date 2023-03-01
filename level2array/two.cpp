#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    int temp = arr[n-1];

    for(int j =n-1 ; j>0 ; j--)
    {
        arr[j] = arr[j-1];
    }

    arr[0] = temp;
    for(int i =0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] ={1, 2, 3, 4, 5};
    int n = 5;
    rotate(arr , n);
     return 0;
}