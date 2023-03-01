#include <bits/stdc++.h>
using namespace std;

//Method 1
// string concatenatedString(string s1, string s2)
// {
//     // Your code here
//     vector<char> v;
//     for (int i = 0; i < s1.length(); i++)
//     {
//         int found = s2.find(s1[i]);
//         if (found != string::npos)
//         {
//             v.push_back(s1[i]);
//         }
//     }
//     for (int i = 0; i < v.size(); i++)
//     {
//         s1.erase(remove(s1.begin(), s1.end(), v[i]), s1.end());
//         s2.erase(remove(s2.begin(), s2.end(), v[i]), s2.end());
//     }

//     string result = s1 + s2;
//     if (result.length() == 0)
//     {
//         result = "-1";
//     }
//     return result;
// }

string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        // for(int i=0 ; i<s1.length() ; i++)
        // {
        //     if(s1[i]    )
        // }
    }

int main()
{
    string s1 = "aacdb";
    string s2 = "gafd";

    string result = concatenatedString(s1, s2);
    cout << result;

    return 0;
}