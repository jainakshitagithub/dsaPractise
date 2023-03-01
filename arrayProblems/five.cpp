#include <bits/stdc++.h>
using namespace std;

bool check(vector<long long> A, vector<long long> B, int N)
{
    // code here->t(c)->O(n)
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    if (equal(A.begin(), A.end(), B.begin()))
    {
        return true;
    }
    else
        return false;
}

int main()
{
    vector<long long> a;
    vector<long long> b;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        b.push_back(y);
    }
    // int m = a.size();
    // int n = b.size();
    if (equal(a.begin(), a.end(), b.begin()))
        cout << "True" << endl;
    else
        cout << "false" << endl;

    bool result = check(a, b, n);
    cout << "The result " << result;

    return 0;
}