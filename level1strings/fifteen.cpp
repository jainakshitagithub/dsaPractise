#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    // code here.
    for(int i =0 ; i<s.length() ; i++)
    {
        if(s[i]!=s[0])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "aaAa";
    bool result = check(s);
    cout << result;
    return 0;
}