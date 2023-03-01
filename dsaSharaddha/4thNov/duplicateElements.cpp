#include <bits/stdc++.h>
using namespace std;

vector<int> duplicateElements(vector<int> nums)
{
    vector<int> res;
    for (int i = 0; i < nums.size(); i++)
    {
        int index = abs(nums[i]) - 1;
        if (nums[index] < 0)
            res.push_back(abs(nums[i]));
        nums[index] = -nums[index];
    }
    return res;
}
int main()
{
    vector<int> nums = {1, 2, 3, 6, 3, 6, 1};
    vector<int> res = duplicateElements(nums);
    for (int &i : res)
        cout << i << " ";

    return 0;
}