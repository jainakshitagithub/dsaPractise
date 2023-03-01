#include <bits/stdc++.h>
using namespace std;

void reverseInGroups(vector<long long> &arr, int n, int k)
{
//my code
    // if (k <= n)
    // {
    //     for (int i = 0; i < k / 2; i++)
    //     {
    //         swap(arr[i], arr[k - i - 1]);
    //     }
    //     int remain = n - k;

    //     for (int i = 0; i < remain / 2; i++)
    //     {
    //         swap(arr[k + i], arr[n - i - 1]);
    //     }

    // }
    // else
    // {
    //     for (int i = 0; i < n / 2; i++)
    //     {
    //         swap(arr[i], arr[n - i - 1]);
    //     }
    // }

//submission code
    if (k >= n)
    {
        reverse(arr.begin(), arr.end());
    }
    else
    {
        int i = 0;
        while (i + k < n)
        {
            reverse(arr.begin() + i, arr.begin() + (i + k));
            i += k;
        }
        if (n - i > 1)
        {
            reverse(arr.begin() + i, arr.end());
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    vector<long long> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int element;
    cin >> element;

    reverseInGroups(v, n, element);

    return 0;
}