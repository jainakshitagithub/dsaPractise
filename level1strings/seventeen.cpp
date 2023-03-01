#include <bits/stdc++.h>
using namespace std;

string javaSub(string S, int L, int R)
{
    // code here
    string s;
    for(int i = L ; i<=R ; i++)
    {
        s.push_back(S[i]);
    }
    return s;
}

int main()
{
    string s = "cdbkdub";
    int l = 0, r = 5;
    string result = javaSub(s , l , r);
    cout<<result;
    return 0;
}