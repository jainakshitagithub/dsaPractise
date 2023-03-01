#include<bits/stdc++.h>
using namespace std;

pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> p;
    int min = *min_element(a , a+n);
    int max = *max_element(a , a+n);
    p = {min , max};
    return p;
}

int main(){ 
    long long a[] =  {3, 2, 1, 56, 10000, 167};
    int n = 6;
    pair<long long, long long> p =  getMinMax(  a , n);
    cout<<p.first<<" "<<p.second;
     return 0;
}