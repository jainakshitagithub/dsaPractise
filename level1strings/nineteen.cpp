#include <bits/stdc++.h>
using namespace std;

string convert(string s)
{
    // code here.
    cout<<'a' - 'z'<<endl;
    int i = 0;
    int len = s.length();
    while (i < len)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            
            s[i] -= 32;
            i++;
        }

        if (s[i] >= 'A' && s[i] <= 'Z' && i < len)
        {
            s[i] += 32;
            i++;
        }
    }
    return s;
}
int main()
{
    string s = "Hello";
    string str = convert(s);
    cout << str;
    return 0;
}