#include <bits/stdc++.h>
using namespace std;

bool checkSubset(vector<int> &arr1, vector<int> &arr2, int n, int m)
{
    // Write your code here.
    map<int, int> count;
    for (int i = 0; i < n; i++)
    {
        count[arr1[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        count[arr2[i]]++;
        if (count[arr2[i]] != 2)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> v1 = {2,3,4};
    vector<int> v2 = {4,3};
    bool result = checkSubset(v1, v2, 3, 2);

    if(result==1)
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0;
}