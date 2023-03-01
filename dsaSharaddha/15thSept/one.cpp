#include<bits/stdc++.h>
using namespace std;

pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long> p;
    int maxEle = INT_MIN;
    int minEle = INT_MAX;
    for(int i=0 ; i<n ; i++)
    {
       if(maxEle<a[i])
       maxEle = a[i];
       if(minEle>a[i])
        minEle = a[i];
    }
    p = {  minEle , maxEle};
    return p;
}
int main(){ 
     return 0;
}