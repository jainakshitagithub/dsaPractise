#include<bits/stdc++.h>
using namespace std;

int getCandidate(int n, int k){
    int count = 0;
    while(n>=k)
    {
        n = n/k;
        count++;
    }
    int ans = pow(k , count);
    return ans;
}

int main(){ 
    int n , k;
    cin>>n;
    cin>>k;

    int result = getCandidate(n , k);
    cout<<result;

     return 0;
}