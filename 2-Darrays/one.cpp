#include <bits/stdc++.h>
using namespace std;

// Mycode -->so destructive😶
//  vector<int> downwardDigonal(int n, vector<vector<int>> A)
//  {
//      // Your code goes here
//      vector<int> v;
//      for (int i = 0; i < 1; i++)
//      {
//          for (int j = 0; j < n; j++)
//          {
//              if (A[i][j] != A[j][i])
//              {
//                  v.push_back(A[i][j]);
//                  int row = i;
//                  int col = j;
//                  while (row <= col)
//                  {

//                     row++;
//                     col--;
//                     v.push_back(A[row][col]);
//                 }
//             }
//             else
//             {
//                 v.push_back(A[i][j]);
//             }
//         }
//     }

//     for (int i = 1; i < n; i++)
//     {
//         int row = i;
//         int col = n - 1;
//         if (A[i][n-1] != A[col][row])
//         {
//             v.push_back(A[i][n-1]);
//             while (row <= col)
//             {
//                 row++;
//                 col--;
//                 v.push_back(A[row][col]);
//             }
//         }
//         else{
//             v.push_back(A[i][col]);
//         }
//     }
//     return v;
// }


//Method 2
vector<int> downwardDigonal(int n, vector<vector<int>> A)
{
    // Your code goes here
    vector<int> v;
    for(int i = 0 ; i<n+n-1 ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            for(int k =0 ;k<n ; k++)
            {
                if(j+k==i)
                {
                    v.push_back(A[j][k]);
                }
            }
        }
    }
    return v;
}



int main()
{
    int n;
    vector<vector<int>> v;
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

    cout << "*******************************" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    cout << "*******************************" << endl;

    vector<int> result = downwardDigonal(n, v);

    for (int &it : result)
    {
        cout << it << " ";
    }

    return 0;
}