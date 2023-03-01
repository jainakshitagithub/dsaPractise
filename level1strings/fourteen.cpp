#include <bits/stdc++.h>
using namespace std;

vector<int> count(string s)
{
    // code here.
    vector<int> v(4, 0);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            if (isupper(s[i]))
            {
                v[0]++;
            }
            else if (islower(s[i]))
            {
                v[1]++;
            }
            else if (isdigit(s[i]))
            {
                v[2]++;
            }
            else{
                v[3]++;
            }
        }
    }
    return v;
}

int main()
{
    string s = "#GeeKs01fOr@gEEks07";

    vector<int> v = count(s);
    for(int &value : v)
    {
        cout<<value<<" ";
    }
    return 0;
}