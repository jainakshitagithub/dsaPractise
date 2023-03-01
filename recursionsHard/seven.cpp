#include <bits/stdc++.h>
using namespace std;

// First approach
// void permuteHelper(vector<int> &freq, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans)
// {

//     if (ds.size() == arr.size())
//     {
//         ans.push_back(ds);
//         return;
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (!freq[i])
//         {
//             ds.push_back(arr[i]);
//             freq[i] = 1;
//             permuteHelper( freq, arr, ds, ans);
//             freq[i] = 0;
//             ds.pop_back();
//         }
//     }
// }

void permuteHelper(int ind ,  vector<int> &arr, vector<vector<int>> &ans){
    if(ind==arr.size())
    {
        ans.push_back(arr);
        return;
    }

    for(int i = ind ; i<arr.size() ; i++)
    {
        swap(arr[i] , arr[ind]);
        permuteHelper(ind+1 , arr , ans);
        swap(arr[i] , arr[ind]);
    }

}

vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> ds;
    vector<int> freq(nums.size(), 0);
    permuteHelper( 0 , nums, ans);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res = permute(nums);
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