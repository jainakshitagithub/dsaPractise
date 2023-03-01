#include<bits/stdc++.h>
using namespace std;

bool checkArraySort(int arr[] , int n)
{
    if(n==1)return true;

    bool restArray = checkArraySort(arr+1 , n-1);
    return (arr[0]<arr[1] && restArray);
}
int main(){ 
    int arr[] = {1,2,3,4,6 ,5};
    bool a = checkArraySort(arr , 6);
    cout<<a;
     return 0;
}