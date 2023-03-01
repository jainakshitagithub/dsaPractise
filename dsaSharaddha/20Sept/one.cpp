#include<bits/stdc++.h>
using namespace std;

vector<int> repeatedNumber(const vector<int> &A) {
    long long int len= A.size();
    long long int S = (len*(len+1))/2;
    long long int P = (len *(len +1) *(2*len +1) )/6;
     long long int missing= 0 , repeating  = 0;
     vector<int> res;

    for(int i=0 ; i<len ; i++)
    {
        S-=(long long int)A[i];
        P-=(long long int)A[i] * (long long int)A[i];
    }

    missing = (S+(P/S))/2;
    repeating = missing - S;
    res.push_back(repeating);
    res.push_back(missing);
    return res;

}

int main(){ 
    vector<int> v = {4,6,2,3,1,1};
    vector<int> ans = repeatedNumber(v);
    for(int i : ans)
    {
        cout<<i<<" ";
    }
     return 0;
}