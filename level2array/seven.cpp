#include <bits/stdc++.h>
using namespace std;

vector<int> find(int arr[], int n, int x)
{
    vector<int> v;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            v.push_back(i);
        }
    }

    if (v.empty())
    {
        v1.push_back(-1);
        v1.push_back(-1);

        return v1;
    }

    int min = *min_element(v.begin(), v.end());
    int max = *max_element(v.begin(), v.end());
    v1.push_back(min);
    v1.push_back(max);
    return v1;
}

// vector<int> find(int arr[], int n, int x)
// {
//     vector<int> v;
//     int ind1 = lower_bound(arr, arr + n, x) - arr;
//     int ind2 = upper_bound(arr, arr + n, x) - arr - 1;
//     cout<<ind1<<endl;
//     cout<<ind2<<endl;
//     if (ind2 == n)
//     {
//         cout<<-1;
//         v.push_back(-1);
//         v.push_back(-1);
//         return v;
//     };
//     cout<<1<<"hello this is me "<<endl;
//     v.push_back(ind1);
//     v.push_back(ind2);
//     return v;
// }

int main()
{
 int n=9, x=126;
int arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 };
    vector<int> v = find(arr, n, x);
    for (auto &value : v)
    {
        cout << value << " ";
    }

    return 0;
}