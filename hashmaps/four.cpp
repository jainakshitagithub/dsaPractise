#include <bits/stdc++.h>
using namespace std;

int findMedian(vector<vector<int>> &arr, int n, int m)
{

    // Write your code here
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            v.push_back(arr[i][j]);
        }
    }

    sort(v.begin(), v.end());
    for(int &value  : v)
    {
        cout<<value<<" ";
    }
    cout<<endl;
    int index = v.size() / 2;
    cout<<"Index "<<index<<endl;
    return v[index];
}

int main()
{
    vector<vector<int>> v; // vector of vector
    int n, m;
    cin >> n;
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    int result = findMedian(v, 3, 3);
    cout << result;

    return 0;
}