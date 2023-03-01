#include <bits/stdc++.h>
using namespace std;


vector<string> extractIntegerWords(string s)
{
    vector<string> res;
    int i=0,len=s.length();
    while(i<len)
    {
        if(isdigit(s[i]))
        {
            string ans="";
            while(isdigit(s[i]) && i<len)
            {
                ans = ans + s[i];
                i++;
            }
            res.push_back(ans);
            // ans.clear();
        }
        i++;
    }
    return res;
}

int main()
{
    string s = "1: Prakhar Agrawal, 2: Manish Kumar Rai, 3: Rishabh Gupta56";
    vector<string> str = extractIntegerWords(s);
    for (string &value : str)
    {
        cout << value << " ";
    }
    return 0;
}