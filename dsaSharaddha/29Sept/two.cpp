#include <bits/stdc++.h>
using namespace std;

string printSequence(string sequence[], string input)
{
    string ans = "";
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == ' ')
        ans = ans + "0";            
        else
        {
            int position = input[i] - 'A';
            ans = ans + sequence[position];
        }
    }
    return ans;
}
int main()
{
    string sequence[] = {
        "2", "22", "222", "3", "33", "333", "4",
        "44", "444", "5", "55", "555", "6", "66",
        "666", "7", "77", "777", "7777", "8", "88",
        "888", "9", "99", "999", "9999"
    };
    string input = "GEEKSFORGEEKS";
    string ans = printSequence(sequence, input);
    cout << ans << endl;
    return 0;
}