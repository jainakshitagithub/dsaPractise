#include<bits/stdc++.h>
using namespace std;

    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> dup;
        for(int i=0 ; i<matrix.size();i++)
        {
            for(int j = 0 ; j<matrix[i].size();j++)
            {
                dup[j][i] = matrix[i][j];
            }
        }
        for(int i=0 ; i<dup.size();i++)
        {
            for(int j = 0 ; j<dup[i].size();j++)
            {
                cout<<dup[j][i]<<" ";
            }
            cout<<endl;
        }
    }

int main(){ 
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(v);
     return 0;
}