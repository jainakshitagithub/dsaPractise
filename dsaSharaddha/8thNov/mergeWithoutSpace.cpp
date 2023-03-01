#include <bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m)
{
    for (int i = m - 1; i >= 0; i--)
    {
        int j;
        int last = arr1[n - 1];
        for (j = n - 2; j >= 0 && arr1[j] > arr2[i]; j--)
            arr1[j + 1] = arr1[j];
        if (j != n - 2 || last > arr2[i])
        {
            arr1[j + 1] = arr2[i];
            arr2[i] = last;
        }
    }
}

int main()
{
    long long arr1[] = {1, 3, 5, 7}, arr2[] = {0, 2, 6, 8, 9};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    merge(arr1, arr2, n, m);
    for (int i = 0; i < n; i++)
        cout << arr1[i] << " ";
    cout << endl;
    for (int i = 0; i < m; i++)
        cout << arr2[i] << " ";
    cout << endl;
    return 0;
}