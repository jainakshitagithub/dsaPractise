#include <bits/stdc++.h>
using namespace std;

void f(vector<int> &arr, vector<int> &subsetSums, int ind, int sum, int n)
{
    if (ind == n)
    {
        subsetSums.push_back(sum);
        return;
    }
    // pick the element
    f(arr, subsetSums, ind + 1, sum + arr[ind], n);
    
    f(arr, subsetSums, ind + 1, sum, n);
}
vector<int> subsetSums(vector<int> arr, int N)
{
    vector<int> subsetSums;
    f(arr, subsetSums, 0, 0, N);
    sort(subsetSums.begin(), subsetSums.end());
    return subsetSums;
}
int main()
{
    vector<int> arr = {2,3};
    vector<int> ans = subsetSums(arr , 2);
    for(int &i : ans)
    cout<<i<<" ";

    return 0;
}