#include <bits/stdc++.h>
using namespace std;

void f(int ind, int target, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans){

    if(target==0)
    {
        ans.push_back(ds);
        return;
    }

    for(int i=ind ; i<arr.size() ; i++)
    {
        if(i>ind && arr[i]==arr[i-1])continue;
        if(arr[i]>target)break;
        ds.push_back(arr[i]);
        f(i+1 , target-arr[i] , arr , ds , ans);
        ds.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    vector<vector<int>> res;
    vector<int> ds;
    sort(candidates.begin() , candidates.end());
    f(0, target, candidates, ds, res);
    return res;
}

int main()
{
    vector<int> arr = {10, 1, 2, 7, 6, 1, 5};
    vector<vector<int>> res = combinationSum2(arr, 8);
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