#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s)
{
    int l, h;
    int start = 0;
    int end = 1;
    string res = "";
    for (int i = 1; i < s.length(); i++)
    {

        l = i-1;
        h = i;
        while (l >= 0 && h < s.length() && s[l] == s[h])
        {
            if (h - l + 1 > end)
            {
                start = l;
                end = h - l + 1;
            }
            l--;
            h++;
        }
        l = i-1;
        h = i + 1;
        while (l >= 0 && h < s.length() && s[l] == s[h])
        {
            if (h - l + 1 > end)
            {
                start = l;
                end = h - l + 1;
            }
            l--;
            h++;
        }
    }

    for (int i = start; i <= start + end - 1; i++)
    {
        res = res + s[i];
    }
    return res;
}

// string longestPalindrome(string s)
// {
//  int maxLength = 1, start = 0;
//  string res = "";
//     // Nested loop to mark start and end index
//     for (int i = 0; i < s.length(); i++) {
//         for (int j = i; j < s.length(); j++) {
//             int flag = 1;

//             // Check palindrome
//             for (int k = 0; k < (j - i + 1) / 2; k++)
//             {
//                  if (s[i + k] != s[j - k])
//                  {
//                     flag = 0;
//                     break;
//                  }
//             }

//             // Palindrome
//             if (flag && (j - i + 1) > maxLength) {
//                 start = i;
//                 maxLength = j - i + 1;
//             }
//         }
//     }
//     for(int i=start ; i<=start+maxLength-1 ; i++)
//     {
//         res = res + s[i];
//     }
//     return res;
// }

int main()
{
    string s = "aba";
    string ans = longestPalindrome(s);
    cout << ans << endl;
    return 0;
}