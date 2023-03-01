#include <bits/stdc++.h>
using namespace std;

vector<string> splitString(string S)
{
    // code here
    vector<string> v(3, "");
    for (int i = 0; i < S.length(); i++)
    {
        if (isalpha(S[i]))
        {
            v[0].push_back(S[i]);
        }
        else if(isdigit(S[i]))
        {
            v[1].push_back(S[i]);
        }
        else{
            v[2].push_back(S[i]);
        }
    }
    return v;
}

int main()
{
    string s = "**Docoding123456789everyday##";
    vector<string> str = splitString(s);
    for (string &value : str)
    {
        cout << value << " ";
    }
    return 0;
}