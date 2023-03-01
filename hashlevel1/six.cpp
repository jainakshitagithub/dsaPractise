#include <bits/stdc++.h>
using namespace std;

int getCount(string S, int N)
{
    string ss = "";
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] != S[i + 1])
        {
            ss += S[i];
        }
    }

    unordered_map<char, int> map;
    for (int i = 0; i < ss.size(); i++)
    {
        map[ss[i]]++;
    }
    int count = 0;
    for (auto it : map)
    {
        if (it.second == N)
            count++;
    }
    return count;
}



int main()
{
    string s = "geeksforgeeks";
    int n = 2;
    int result = getCount(s, n);
    cout << result;
    return 0;
}