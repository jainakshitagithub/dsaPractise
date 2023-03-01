#include <bits/stdc++.h>
using namespace std;

bool solve(int ind, int target, int sum, int arr[], int n)
{
    if (ind == n-1)
    {
        if (target != 0 && target == sum)
            return true;
        return false;
    }

    if (solve(ind + 1, target - arr[ind], sum + arr[ind], arr, n))
        return true;
    // do not pick
    if (solve(ind + 1, target, sum, arr, n))
        return true;

    return false;
}

int equalPartition(int N, int arr[])
{
    int target = 0;
    for (int i = 0; i < N; i++)
    {
        target += arr[i];
    }
    bool a = solve(0, target, 0, arr, N);
    return a;
}

int main()
{
    int arr[] = {1, 3 , 5};
    int n = sizeof(arr) / sizeof(int);

    int ans = equalPartition(n, arr);
    cout << ans;
    return 0;
}