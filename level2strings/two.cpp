#include <bits/stdc++.h>
using namespace std;

// Method 1
//  bool areRotations(string s1, string s2)
//  {
//      // Your code here
//      int n = s1.length();
//      for (int i = 0; i < n; i++)
//      {
//          char temp = s1[n - 1];

//         for (int j = n - 1; j > 0; j--)
//         {
//             if (j >= 1)
//             {
//                 s1[j] = s1[j - 1];
//             }
//         }

//         s1[0] = temp;
//         if (s1 == s2)
//         {
//             return true;
//         }
//     }
//     return false;
// }

bool areRotations(string s1, string s2)
{
    // Your code here
    if(s1.length() == s2.length())
    {
        string temp = s1+s1;
        if(temp.find(s2) != string::npos)
        {
        return true;
        }
    }
    return false;
}

int main()
{
    string str1 = "geeksforgeeks";
    string str2 = "forgeeksgeeks";
    bool a = areRotations(str1, str2);
    cout << a;
    return 0;
}