#include<bits/stdc++.h>
using namespace std;

  long long solve(int n, long long a[], long long b)
    {
        for(int i =0 ; i<n ; i++)
        {
            if(b==a[i])
            {
                b = b * a[i];
            }
        }
        return b;
    }

int main(){ 
    long long arr[] = {1,2,3,4,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    long long b;
    cin>>b;

    long long result = solve(n,arr,b);
    cout<<result<<endl;

     return 0;
}