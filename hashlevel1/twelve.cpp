#include <bits/stdc++.h>
using namespace std;

vector<int> uniqueNumbers(int L, int R)
{
    vector<int> v;

    for (int i = L; i <= R; i++)
    {
        string s = to_string(i);
        set<int> ss(s.begin() , s.end());
        if(s.length()==ss.size())
        {
            v.push_back(i);
        }
    }
    return v;
}

int main()
{
    vector<int> v = uniqueNumbers(23, 362);
    for (auto &it : v)
    {
        cout << it << " ";
    }

    return 0;
}