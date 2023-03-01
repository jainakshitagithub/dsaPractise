#include <bits/stdc++.h>
using namespace std;

void solve(int ind, int sum, int a[], set<int> s, int n, int k , vector<int> &subsetSums)
{
    if (ind == n)
    {

        for(auto i : s)
        cout<<i<<" ";
        cout<<endl;
    }

s.insert(a[ind]);
solve(ind + 1, sum + a[ind], a, s, n, k , subsetSums);
s.erase(a[ind]);
solve(ind + 1, sum, a, s, n, k , subsetSums);
    // if (solve(ind + 1, sum + a[ind], a, m, n, k , subsetSums))
    //     return true;
    // if (solve(ind + 1, sum, a, m, n, k , subsetSums))
    //     return true;

    // return false;
}

bool isKPartitionPossible(int a[], int n, int k)
{
    set<int> s;
    vector<int> subsetSums;
     solve(0, 0, a, s, n, k , subsetSums);

    for(auto &i : subsetSums)
    {
        cout<<i<<" ";
    }
    // // for(auto i : m)
    // // {
    // //     cout<<i.first<<" "<<i.second<<endl;
    // // }
    // return ans;
    return true;
}

int main()
{
    int arr[] = {2,1,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    int k ;
    cin>>k;
    bool res = isKPartitionPossible(arr , n , k);
    cout<<res;
    return 0;
}