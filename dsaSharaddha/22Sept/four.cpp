#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> overlappedInterval(vector<vector<int>> &intervals)
{
    if (intervals.size() == 0)
        return intervals;

    vector<vector<int>> res;
    sort(intervals.begin(), intervals.end());

    vector<int> tempInterval = intervals[0];
    for (auto it : intervals)
    {
        if (it[0] <= tempInterval[1])
        {
            tempInterval[1] = max(it[1], tempInterval[1]);
        }
        else
        {
            res.push_back(tempInterval);
            tempInterval = it;
        }
    }
    res.push_back(tempInterval);
    return res;
}
int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 4}, {6, 8}, {9, 10}};
    vector<vector<int>> ans = overlappedInterval(intervals);
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