#include <bits/stdc++.h>
using namespace std;

// Count the number of anagrams
int countAnagrams(string s, string ptn)
{
    unordered_map<char, int> m;
    int k = ptn.length();
    int i = 0, j = 0;
    int ans = 0;

    for (int i = 0; i < ptn.length(); i++)
    {
        m[s[i]]++;
    }

    int count = m.size();
    // for (auto &i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    while (j < s.length())
    {
        if (m.count(s[j]))
        {
            m[s[j]]--;
        }
        // for (auto &i : m)
        // {
        //     cout << i.first << " " << i.second << endl;
        // }
        if (m[s[j]] == 0)
        {
            // cout <<"count :: " <<count << endl;
            count--;
        }

        if (j - i + 1 < k)
            j++;

        else if (j - i + 1 == k)
        {
    //  cout<<"*******Inside************"<<endl;

    //            for (auto &i : m)
    //     {
    //         cout << i.first << " " << i.second << endl;
    //     }
    //         cout <<"count :: " <<count << endl;
            if (count == 0)
                ans++;

            if (m.count(s[i]))
            {
                m[s[i]]++;
            }

            if (m[s[i]] > 0)
            {
                count++;
            }
            i++;
            j++;
        }
    }
    return ans;
}

int main()
{
    string str = "aabaabaa";
    string ptn = "aaba";
    int res = countAnagrams(str, ptn);
    cout << res << endl;
    return 0;
}