#include<bits/stdc++.h>
using namespace std;

int countOfElements(int arr[], int n, int x) 
{
    int count = 0;
    for(int i =0 ; i<n ; i++)
    {
        if(arr[i]<=x)
        {
            count++;
        }
    }
    return count;
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
    int element;
    cin>>element;

    int rr = countOfElements(a , n ,element);
    cout<<rr;

     return 0;
}