#include <bits/stdc++.h>
using namespace std;

vector<int> firstAndLast(vector<int> &arr, int n, int x)
{
    int l = 0;
    int r = n - 1;
    int first = -1;
    int last = -1;
    vector<int> ans;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            first = mid;
            r = mid - 1;
        }
        else if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }

    l = 0;
    r = n - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
        {
            last = mid;
            l = mid + 1;
        }
        else if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    if (first == -1 && last == -1)
    {
        ans.push_back(-1);
        return ans;
    }
    ans.push_back(first);
    ans.push_back(last);
    return ans;
}

int main()
{
    vector<int> v = {1, 2, 3, 4};
    int n = v.size();
    int x;
    cin >> x;
    vector<int> result = firstAndLast(v, n, x);

    for (int &i : result)
    {
        cout << i << " ";
    }
    return 0;
}