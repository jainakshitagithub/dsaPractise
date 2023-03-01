#include <bits/stdc++.h>
using namespace std;

bool isPossible(long long a[], long long b[], int n, long long k)
{
    
}

int main()
{
    long long a[] = {2, 1, 3},
              b[] = {7, 8, 9},
              k = 10;
    
    int n = sizeof(a)/sizeof(int);
    int k = 10;

    bool ans = isPossible(a , b , n , k );
    cout<<ans<<endl;

    return 0;
}