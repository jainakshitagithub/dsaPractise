
#include<bits/stdc++.h>
using namespace std;

 int getSum(int a[], int n) {
        // Your code goes here
        int sum=0;
        for( int i =0 ; i<n ; i++)
        {
            sum = sum+a[i];
        }
        return sum;
    }

int main(){ 
    int a[6] = {5,8,3,10,22,45};
  int n = sizeof(a)/sizeof(int);
    int result = getSum(a , n);
    cout<<result;
     return 0;
}