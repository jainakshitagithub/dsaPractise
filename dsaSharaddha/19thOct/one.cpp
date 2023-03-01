#include<bits/stdc++.h>
using namespace std;

//First Approach
// vector<vector<int>> rotate(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         vector<vector<int>> dup(n , vector<int>(n)) ;
//         for(int i =0 ; i<n ; i++)
//         {
//             for(int j= 0 ;j<n  ; j++)
//             {
//               dup[i][j] = matrix[j][i];
//             }
//         }
//         for(int i = 0 ; i<n ; i++)
//         reverse(dup[i].begin() , dup[i].end());
//         return dup;
//     }


//Optimal approach
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i =0 ; i<n ; i++)
        {
            for(int j= 0 ;j<i ; j++)
            {
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
        for(int i = 0 ; i<n ; i++)
        reverse(matrix[i].begin() , matrix[i].end());
    }

int main(){ 
    vector<vector<int>> matrix = {{1,2,3} , {4,5,6} , {7,8,9}};
    rotate(matrix);
    // vector<vector<int>> res = rotate(matrix);
    // for(int i=0 ; i<res.size() ; i++)
    // {
    //     for(int j = 0 ;j<res[i].size() ; j++)
    //     {
    //         cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
     return 0;
}