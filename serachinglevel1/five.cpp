#include <bits/stdc++.h>
using namespace std;

int countZeros(vector<vector<int>> A)
{
    int n = A.size();
    int count = 0;
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(A[i][j]==0)
            count++;
        }
    }
    return count;
}


int main()
{
    vector<vector<int>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    int ans = countZeros(v);
    cout<<ans<<endl;

    cout << "*******************" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}