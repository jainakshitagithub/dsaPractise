#include <bits/stdc++.h>
using namespace std;

// Method 1
// bool findTriplets(int arr[], int n)
// {
//     // Your code here
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 int sum = arr[i] + arr[j] + arr[k];
//                 if (sum == 0)
//                 {
//                     return true;
//                 }
//             }
//         }
//     }
//     return false;
// }

// Method 2

// bool findTriplets(int arr[], int n)
// {
//     // Your code here
//     int x = 0;
//     for (int i = 0; i < n - 2; i++)
//     {
//         unordered_set<int> s;
//         int curr = x - arr[i];
//         for (int j = 0; j < n; j++)
//         {
//             if (s.find(curr - arr[j]) != s.end())
//             {
//                 return true;
//             }
//             s.insert(arr[j]);
//         }
//     }
//    return false;
// }

// Method 3
bool findTriplets(int arr[], int n)
{
    // Your code here
    sort(arr , arr+n);
    for(int i = 0 ; i<n-2 ; i++)
    {
        int l = i+1;
        int r = n-1;
        while(l<r)
        {
            int sum = arr[i] + arr[l] + arr[r];
            if(sum== 0)
            {
                return true;
            }
            else if(sum<0)
            {
                l++;
            }
            else{
                r--;
            }
        }
    }
    return false;
}

int main()
{
    int n = 27;
    int a[] = {42, -21, 13, -26, 79, 40, 62, -60, 29, -23, 97, -39, 40, -35, 26, -54, 87, 5, 77, 21, 28, 10, 32, -22, 25, 21, 3};
    bool r = findTriplets(a, n);
    cout << r;

    return 0;
}