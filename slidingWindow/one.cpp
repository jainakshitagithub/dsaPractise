// Maximun element Sum

#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n, int k)
{
    int i = 0, j = 0;
    int sum = 0, maxi = 0;
    while (j < n)
    {
        sum = sum + arr[j];
        if (j - i + 1 < k)
            j++;
        else if (j - i + 1 == k)
        {
            maxi = max(maxi, sum);
            sum = sum - arr[i];
            i++;
            j++;
        }
    }
    return maxi;
}

vector<int> firstNegativeNum(int arr[], int n, int k)
{
    int i = 0, j = 0;
    queue<int> q;
    vector<int> v;

while(j<n)
{
        if (arr[j] < 0)
    {
        q.push(arr[j]);
    }

    if (j - i + 1 < k)
    {
        j++;
    }
    else if (j - i + 1 == k)
    {
        if (q.size() == 0)
        {
            v.push_back(0);
        }
        else
        {
            v.push_back(q.front());
            if(arr[i]==q.front())
            {
                q.pop();
            }
        }
        i++;
        j++;
    }
}
return v;
}

int main()
{
    int arr[] = {12, -1, -7, -8, -15, 30, 16, 28};
    int n = sizeof(arr) / sizeof(int);
    int k;
    cin >> k;

    // int res = maxSum(arr , n , k);
    // cout<<res<<endl;

   vector<int> ans =  firstNegativeNum(arr, n, k);
   for(int &i : ans){
    cout<<i<<" ";
   }

    return 0;
}