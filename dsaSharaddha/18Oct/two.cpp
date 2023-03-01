#include<bits/stdc++.h>
using namespace std;

    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> dup = matrix;
        for(int i=0 ; i<dup.size() ; i++){
            for(int j=0 ; j<dup[0].size() ; j++){
                if(dup[i][j]==0)
                {
                    for(int k = 0 ; k<matrix.size() ; k++)
                    {
                        matrix[k][j] = 0;
                    }
                    for(int k = 0 ; k<matrix[0].size() ; k++)
                    {
                        matrix[i][k] = 0;
                    }
                }
            }
        }
    }

int main(){ 
    vector<vector<int>> v = {{1,1,1} , {1,0,1},{1,1,1}};
    setZeroes(v);
    for(int i =0 ; i<v.size() ; i++)
    {
        for(int j = 0 ; j<v[0].size() ; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

     return 0;
}