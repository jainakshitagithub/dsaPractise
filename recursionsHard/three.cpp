#include <bits/stdc++.h>
using namespace std;

void f(int ind , int target ,  vector<int> &arr , vector<int> &ds , vector<vector<int>> &ans)
{
    if(ind==arr.size())
    {
        if(target==0)
        ans.push_back(ds);
        return ;
    }

    if(arr[ind]<=target)
    {
        ds.push_back(arr[ind]);
        f(ind , target-arr[ind] , arr , ds , ans);
        ds.pop_back();
    }
    f(ind+1 , target , arr , ds , ans);
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> res;
    vector<int> ds;
    f(0 , target , candidates , ds , res);
    return res;
}

int main()
{
    vector<int> arr = {2, 3, 6, 7};
    vector<vector<int>> res = combinationSum(arr, 7);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}