#include<bits/stdc++.h>
using namespace std;

vector<int> commonele(vector<vector<int>> mat , int n , int m){
    vector<int> ans;
    map<int, int> mp;
    for(int j =0 ; j<m ; j++){
            mp[mat[0][j]] = 1 ;
    }

 

    for(int i =1 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(mp.count(mat[i][j]) && mp[mat[i][j]]<= i){
                mp[mat[i][j]]++;
            }
            if(  i == n-1 && mp[mat[i][j]]==n){
                ans.push_back(mat[i][j]);
            }
        }
    }
return ans;

}
int main(){ 
    vector<vector<int>> mat = { {1, 2, 3, 4, 5},
                    {2, 4, 5, 8, 10},
                    {3, 5, 7, 9, 11},
                    {1, 3, 5, 7, 9},
                  };
                  int n = mat.size();
                  int m = mat[0].size();
                  vector<int> res = commonele(mat , n , m);
                  for(int &i: res)cout<<i<<" ";


     return 0;
}