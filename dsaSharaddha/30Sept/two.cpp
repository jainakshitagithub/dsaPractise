#include <bits/stdc++.h>
using namespace std;

string substr(string s, int start, int end)
{
    string ans = "";
    for (int i = start; i < end; i++)
    {
        ans += s[i];
    }
    return ans;
}

string smallestWindow(string s, string p)
{

    unordered_map<char, int> mp;
    for (int i = 0; i < p.length(); i++)
    {
        mp[p[i]]++;
    }

    int dMatchCount = p.size();
    int matchCount = 0;

    int j = 0, i = 0;
    unordered_map<char, int> ms;
    string ans = "";

    while (j < s.length())
    {
        ms[s[j]]++;
        if (ms[s[j]] <= mp[s[j]])
        {
            cout << s[j] << " " << ms[s[j]] << endl;
            matchCount++;
            cout << matchCount << " matchCount" << endl;
        }

        if (matchCount < dMatchCount)
            j++;
        else if (matchCount == dMatchCount)
        {

            while ( matchCount == dMatchCount)
            {
                string a = substr(s, i, j - i + 1);
                cout << a << endl;

                if (ans.length() == 0 || ans.length() > a.length())
                    ans = a;
                cout << ans << " inside ans " << endl;
                if (ms[s[i]] == 1)
                    ms.erase(s[i]);
                else if (ms[s[i]] > 1)
                    ms[s[i]]--;

                if(mp.count(s[i]))
                {
                     if (ms[s[i]] < mp[s[i]] || ms.count(s[i])==false)
                    matchCount--;
                }
                i++;
            }
            j++;
        }
    }
    return ans;
}

int main()
{
    string s = "zoomlazapzo";
    string p = "oza";
    string ans = smallestWindow(s, p);
    cout << "Result : " << ans << endl;
    return 0;
}