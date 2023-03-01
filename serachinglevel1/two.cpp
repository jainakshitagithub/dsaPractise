#include <bits/stdc++.h>
using namespace std;

int count(int arr[], int n, int x)
{
    int l = 0;
    int r = n - 1;
    int first = -1;
    int last = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (x == arr[mid])
        {
            first = mid;
            r = mid - 1;
        }

        else if (x < arr[mid])
            r = mid - 1;

        else
            l = mid + 1;
    }

     l = 0;
     r = n - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (x == arr[mid])
        {
            last = mid;
            l = mid + 1;
        }

        else if (x < arr[mid])
            r = mid - 1;

        else
            l = mid + 1;
    }

    if(last ==-1 && first ==-1 )
    return 0;

    return (last-first)+1;
}

int main()
{
    int arr[] = {10,10,10,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cin >> x;
    int result = count(arr, n, x);
    cout << result;
    return 0;
}