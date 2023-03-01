#include<bits/stdc++.h>
using namespace std;

    bool search( int i , int j , vector<vector<char>> &board ,   string word , int k  ,int n , int m){

//Second approach
        // if(k==word.length()-1)return true;
        // if(word.length()==1)return true;

        // int di[] = {1 , 0 , 0 , -1};
        // int dj[] = {0 , -1 , 1 , 0};

        // for(int ind = 0 ; ind<4 ; ind++){
        //     int nexti = di[ind] + i;
        //     int nextj = dj[ind] + j;
        //     if(nexti>=0 && nextj>=0 && nexti<n && nextj<m && visited[nexti][nextj]==0 && board[nexti][nextj]==word[k+1]){
        //         visited[i][j] = 1;
        //         for(int l = 0 ; l<n ; l++){
        //             for(int p = 0 ; p<n ; p++){
        //                 cout<<visited[l][p]<<" ";
        //             }
        //             cout<<endl;
        //         }
        //         cout<<"********"<<endl;
        //         if(search(nexti , nextj , board , visited , word , k+1 , n , m))return true;
        //         visited[i][j] = 0;
        //                         for(int l = 0 ; l<n ; l++){
        //             for(int p = 0 ; p<n ; p++){
        //                 cout<<visited[l][p]<<" ";
        //             }
        //             cout<<endl;
        //         }
        //         cout<<"********"<<endl;
        //     }
        // }

        // return false;

//Third Apprach==>without visited array
        if(k==word.length()-1)return true;
        if(word.length()==1)return true;

        int di[] = {1 , 0 , 0 , -1};
        int dj[] = {0 , -1 , 1 , 0};

        for(int ind = 0 ; ind<4 ; ind++){
            int nexti = di[ind] + i;
            int nextj = dj[ind] + j;
            if(nexti>=0 && nextj>=0 && nexti<n && nextj<m  && board[nexti][nextj]==word[k+1]){
                board[i][j]-=65;
                if(search(nexti , nextj , board, word , k+1 , n , m))return true;
                board[i][j]+=65;         
            }
        }


        return false;

//First approach
        // visited[i][j] = 1;
        // if(i>0 && !visited[i-1][j] && board[i-1][j]==word[k+1] && search(i-1 , j , board , visited , word , k+1 , n , m ) )return true;
        // if(j>0 && !visited[i][j-1] && board[i][j-1]==word[k+1] && search(i , j-1 , board , visited , word , k+1 , n , m ) )return true;
        // if(i<n-1 && !visited[i+1][j] && board[i+1][j]==word[k+1] && search(i+1 , j , board , visited , word , k+1 , n , m ) )return true;
        // if(j<m-1 && !visited[i][j+1] && board[i][j+1]==word[k+1] && search(i, j+1 , board , visited , word , k+1 , n , m ) )return true;
        // visited[i][j] = 0;
        // return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        // vector<vector<int>> visited(board.size() , vector<int> (board[0].size() , 0));
        if(board.size()==0)return false;
        if(word.size()==0)return false;
        for(int i=0 ; i<board.size() ; i++)
        {
            for(int j=0 ; j<board[i].size() ; j++)
            {
                if(board[i][j] == word[0]){
                    // if(search(i , j , board , visited , word , 0 ,board.size() , board[i].size() ))return true;
                    if(search(i , j , board  , word , 0 ,board.size() , board[i].size() ))return true;

                }
            }
        }
        return false;
    }

int main(){ 
   vector<vector<char>> board = {{'A' , 'B' , 'C' , 'E'} , {'S' , 'F' , 'C' , 'S'} , {'A' , 'D' , 'E' , 'E'}};
   string word  = "ABCCED";
   bool a = exist(board , word);
   cout<<a<<endl;
     return 0;
}