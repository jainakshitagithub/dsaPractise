#include<bits/stdc++.h>
using namespace std;

void print(int ar[], int n)
{
    for( int  i =0 ; i<n ; i+=2)
    {
        cout<<ar[i]<<" ";
    }
}
int main(){ 
    int n;
    cin>>n;
    int a[n];
    for(int i =0 ; i<n ; i++)
    {
        int x;
        cin>>x;
        a[i] = x;
    }
    print(a , n);
     return 0;
}