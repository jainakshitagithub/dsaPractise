#include <bits/stdc++.h>
using namespace std;

// vector<vector<int>> fourSum(vector<int> &nums, int target)
// {
//     vector<vector<int>> res;
//     sort(nums.begin(), nums.end());
//     int n = nums.size();
//     for (int i = 0; i < n - 3; i++)
//     {
//         if (i > 0 || nums[i] != nums[i - 1])
//         {
//             for (int j = i + 1; j < n - 2; j++)
//             {
//                 if (j > i || nums[j] != nums[j - 1])
//                 {
//                     for (int k = j + 1; k < n - 1; k++)
//                     {
//                         if (k > j || nums[k] != nums[k - 1])
//                         {
//                             for (int l = k + 1; l < n; l++)
//                             {
//                                 if (l > k || nums[l] != nums[l - 1])
//                                 {
//                                     int s = nums[i] + nums[j] + nums[k] + nums[l];
//                                     if (s == target)
//                                     {
//                                         vector<int> temp;
//                                         temp.push_back(nums[i]);
//                                         temp.push_back(nums[j]);
//                                         temp.push_back(nums[k]);
//                                         temp.push_back(nums[l]);
//                                         res.push_back(temp);
//                                     }
//                                 }
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }

//     return res;
// }

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 3; i++)
    {
        if (i == 0 || (i>0 && nums[i] != nums[i - 1]) )
        {
            for (int j = i + 1; j < n - 2; j++)
            {
                if (j == i+1 || (j>i+1 && nums[j] != nums[j - 1]) )
                {
                    int start = j + 1;
                    int end = n - 1;
                    while (start < end)
                    {
                        int s = nums[i] + nums[j] + nums[start] + nums[end];
                        if(s==target){
                           vector<int> temp;
                                        temp.push_back(nums[i]);
                                        temp.push_back(nums[j]);
                                        temp.push_back(nums[start]);
                                        temp.push_back(nums[end]);
                                        res.push_back(temp);
                            if(start<end && nums[start]==nums[start+1])start++;
                            if(start<end && nums[end]==nums[end-1])end--;
                            start++;
                            end--;

                        }
                        else if(s<target){
                            start++;
                        }
                        else{
                            end--;
                        }
                    }
                }
            }
        }
    }
    return res;
}

int main()
{
    vector<int> nums = {4,-9,-2,-2,-7,9,9,5,10,-10,4,5,2,-4,-2,4,-9,5};
    int target = -13;
    vector<vector<int>> ans = fourSum(nums, target);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}