#include<bits/stdc++.h>
using namespace std;

int findElementAtIndex(int a[], int n, int key) 
    {
        // Your code goes here
        return a[key];
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
    int index;
    cin>>index;

    int rr = findElementAtIndex(a , n ,index);
    cout<<rr;
     return 0;
}