#include <bits/stdc++.h>
using namespace std;

bool isPossible(long long a[], long long b[], int n, long long k)
{
        sort(a,a+n);
        sort(b,b+n, greater<int>());
        //checking only 1st and last elements
       for(int i=0 ; i<n ; i++){
        if(a[i] + b[i]<k)return false;
       }
       return true;


}

int main()
{
    long long a[] = {1,1 ,3}, b[] = { 7 , 8 , 9}, k = 10;
    int n = sizeof(a) / sizeof(a[0]);
    bool ans = isPossible(a , b , n , k);
    cout<<ans<<endl;

    return 0;
}