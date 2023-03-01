#include <bits/stdc++.h>
using namespace std;

bool checkIsAP(int arr[], int n)
{
    sort(arr, arr + n);
    int diff = arr[1] - arr[0];
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] +diff != arr[i + 1])
            return false;
    }
    return true;
}

int main()
{
    int N = 4;
    int arr[] = {0, 12, 4, 8};
    bool result = checkIsAP(arr, N);
    cout << result;
    return 0;
}