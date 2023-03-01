#include <bits/stdc++.h>
using namespace std;

vector<int> findIndex(int a[], int n, int key)
{
    // code here.
    vector<int> v;
    vector<int> v1;
    for(int i =0 ; i<n ; i++)
    {
        if(a[i]==key)
        {
           v1.push_back(i);
        }
    }
  if(v1.empty())
  {
    v1.push_back(-1);
  }
    int min = *min_element(v1.begin() , v1.end());
    int max = *max_element(v1.begin() , v1.end());
    v.push_back(min);
    v.push_back(max);

    return v;
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
    }

    int element;
    cin >> element;

    vector<int> v = findIndex(a, n, element);

    for (int &value : v)
    {
        cout << value << " ";
    }

    return 0;
}