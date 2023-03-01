#include <bits/stdc++.h>
using namespace std;

string transform(string s)
{
    // code here
    for (int i = 0; i < s.length(); i++)
    {
        s[0] = toupper(s[0]);
        if (s[i] == ' ')
        {
            s[i + 1] = toupper(s[i + 1]);
        }
    }
    return s;
}

int main()
{
    string s = "i love programming";
    string r = transform(s);
    cout << r;
    return 0;
}