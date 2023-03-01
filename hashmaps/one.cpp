#include <bits/stdc++.h>
using namespace std;

pair<int, int> findSimilarity(vector<int> arr1, vector<int> arr2, int n, int m)
{
    // Write Your Code here.
    map<int, int> count;
    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < n; i++)
    {
        count[arr1[i]]++;
        v2.push_back(arr1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        count[arr2[i]]++;
        if (count[arr2[i]] == 2)
        {
            v1.push_back(arr2[i]);
        }
        else
        {
            v2.push_back(arr2[i]);
        }
    }

   

    pair<int, int> p = make_pair(v1.size(), v2.size());

    return p;
}

int main()
{
    vector<int> arr1 = {1, 2};
    vector<int> arr2 = {3,4};

    pair<int, int> p = findSimilarity(arr1, arr2, 2, 2);

    cout << p.first << " " << p.second;

    return 0;
}


// 4
// 2 2
// 1 2
// 3 4  
// 2 1
// 2 3
// 3
// 5 3
// 1 2 3 4 5
// 4 6 2
// 1 2
// 1
// 3 2