#include <bits/stdc++.h>
using namespace std;

void f(vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans, int ind)
{
    ans.push_back(ds);
  for (int i = ind; i < nums.size(); i++)
  {
    if (i != ind && nums[i] == nums[i - 1])
      continue;
    ds.push_back(nums[i]);
    f(nums, ds, ans, i + 1);
    ds.pop_back();
  }
}

vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
  vector<vector<int>> ans;
  vector<int> ds;
  sort(nums.begin(), nums.end());
  f(nums, ds, ans, 0);
  return ans;
}

int main()
{
  vector<int> nums = {1,2,2};
  vector<vector<int>> res = subsetsWithDup(nums);
 for(int i=0 ; i<res.size() ; i++)
 {
  for(int j = 0 ; j<res[i].size() ; j++)
  {
    cout<<res[i][j]<<" ";
  }
  cout<<endl;
 }
  return 0;
}