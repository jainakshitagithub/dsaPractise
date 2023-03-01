#include <bits/stdc++.h>
using namespace std;


void solve(vector<string> crossword , string words)
{
    for(int i=0 ; i<crossword.size() ; i++)
    {
        for(int j=0 ; j<crossword[i].size() ; j++)
        {
            if(crossword[i][j]=='-')
            {
                placedVertically(){
                    
                }
            }
        }
    }
}

vector<string> crosswordPuzzle(vector<string> crossword, string words)
{
    
    return crossword;
}

int main()
{
    vector<string> crossword = {
        "++++++-+++",
        "++------++",
        "++++++-+++",
        "++++++-+++",
        "+++------+",
        "++++++-+-+",
        "++++++-+-+",
        "++++++++-+",
        "++++++++-+",
        "++++++++-+",
    };



    string words;
    getline(cin, words);

    vector<string> result = crosswordPuzzle(crossword, words);
    for(auto i : result){
        cout<<i<<" ";
    }
    return 0;
}