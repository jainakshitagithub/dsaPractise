#include <bits/stdc++.h>
using namespace std;

void zigzagTraversal(vector<vector<int>> arr)
{
    vector<vector<int>> ans;
    for (int k = 0; k < arr.size(); k++)
    {
       int i = k;
       int j = 0;
       while(i>=0 && j<arr[0].size()){
        cout<<arr[i][j]<<" ";
        i--;j++;
       }
       cout<<endl;
    }
    for (int k = 1; k < arr[0].size(); k++)
    {
       int i = arr.size()-1;
       int j = k;
       while(j<arr[0].size()){
         cout<<arr[i][j]<<" ";
        i--;j++;
       }
       cout<<endl;
    }
}
int main()
{
    vector<vector<int>> v = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
    };

     zigzagTraversal(v);

    return 0;
}