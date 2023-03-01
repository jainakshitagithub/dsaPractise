#include<bits/stdc++.h>
using namespace std;

int Maximize(int a[],int n)
    {
        // Complete the function
        int sum = 0;
        sort(a , a+n);
        for(int i =0 ;i <n ; i++)
        {
             sum =(sum + (long)a[i]*i)%(1000000007);
        }
       
        return sum;
    }

int main(){ 
   int arr[] = {6,6,8,19,8,10,19,14,20,18,5,11,20,6,10,7,15,8,8,9};
   int n = 20;
   int r = Maximize( arr , n);
   cout<<r;
     return 0;
}