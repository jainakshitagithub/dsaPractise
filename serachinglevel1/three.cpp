#include <bits/stdc++.h>
using namespace std;

bool check_elements(int arr[], int n, int A, int B)
{
    sort(arr, arr + n);
    int j = A , count = 0;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==j && j<=B)
        {
            count++;
            j++;
        }
    }
    if(count == (B-A)+1)
    return true;
    return false;
}

int main()
{
    int arr[] = {1, 9, 1, 1, 5, 8, 9, 4, 3, 8, 10, 9, 4, 1, 8, 2, 6, 5, 1, 8, 5, 2, 6, 8, 2, 8, 9, 5, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int A, B;
    cin >> A;
    cin >> B;

    bool result = check_elements(arr, n, A, B);
    cout << result;

    return 0;
}