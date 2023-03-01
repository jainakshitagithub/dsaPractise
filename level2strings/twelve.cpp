#include <bits/stdc++.h>
using namespace std;

int RedOrGreen(int N, string S)
{
    // code here
    int countRed = 0;
    int countGreen = 0;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'R')
        {
            countRed++;
        }
        else
        {
            countGreen++;
        }
    }
    if (countRed  <= countGreen)
    {
        return countRed;
    }
    return countGreen;
}

int main()
{
    string s = "RGRGR";
    int n = 5;
    int r = RedOrGreen(n , s);
    cout<<r;
    return 0;
}