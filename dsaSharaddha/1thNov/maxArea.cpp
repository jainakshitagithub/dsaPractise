#include <bits/stdc++.h>
using namespace std;

vector<int> prevSmaller(vector<int> arr)
{
    vector<int> ans;
    stack<int> st;
    for (int i = 0; i < arr.size(); i++)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
            st.pop();

        if (st.empty())
            ans.push_back(-1);
        else
            ans.push_back(st.top());

        st.push(i);
    }
    return ans;
}

vector<int> nextSmaller(vector<int> arr)
{
    vector<int> ans;
    stack<int> st;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
            st.pop();
        if (st.empty())
            ans.push_back(-1);
        else
            ans.push_back(st.top());

        st.push(i);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int maxAreaHistogram(vector<int> arr)
{
    int maxAns = 0;
    vector<int> ps = prevSmaller(arr);
    vector<int> ns = nextSmaller(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        int curr = (ns[i] - ps[i] - 1) * arr[i];
        maxAns = max(curr, maxAns);
    }
    return maxAns;
}
int maxArea(vector<vector<int>> arr, int n, int m)
{
    vector<int> curRow = arr[0];

    int maxAns = maxAreaHistogram(curRow);
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (arr[i][j] == 1)
                curRow[j]++;
            else
                curRow[j] = 0;
        }
        int curAns = maxAreaHistogram(curRow);
        maxAns = max(curAns, maxAns);
    }
    return maxAns;
}

int main()
{
    vector<vector<int>> M = { {0 ,1, 1, 0},
                              {1, 1, 1, 1},
                              {1, 1, 1, 1},
                              {1, 1, 0, 0} } ;

    int n = M.size();
    int m = M[0].size();
    int ans = maxArea(M , n , m);
    cout<<ans<<endl;
    return 0;
}