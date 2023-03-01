#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
     unordered_map<string, vector<string>> m;
     vector<vector<string>> result;
     for (int i = 0; i < strs.size(); i++)
     {
          string temp = strs[i];
          sort(strs[i].begin(), strs[i].end());
           m[strs[i]].push_back(temp);
     }
     for (auto itr = m.begin(); itr != m.end(); ++itr)
     {
          result.push_back(itr->second);
     }
     return result;
}



int main()
{
     vector<string> arr = {"eat", "tea", "tan", "ate", "nat", "bat"};
     vector<vector<string>> v = groupAnagrams(arr);
     for (int i = 0; i < v.size(); i++)
     {
          for (int j = 0; j < v[i].size(); j++)
          {
               cout << v[i][j] << " ";
          }
          cout << endl;
     }
     return 0;
}