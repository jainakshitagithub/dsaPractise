#include <bits/stdc++.h>
using namespace std;

// Method 1
//  int findSum(string str)
//  {

//     // Your code here
//     int len = str.length();
//     int i = 0;
//     int sum = 0;
//     vector<string> res;
//     while(i<len)
//     {
//         if(isdigit(str[i]))
//         {
//             string ans="";
//             while(isdigit(str[i]) && i<len)
//             {
//                 ans = ans + str[i];
//                 i++;
//             }
//             res.push_back(ans);
//             // ans.clear();
//         }
//         i++;
//     }
//     for (int i = 0; i < res.size(); i++)
//     {
//         int num = stoi(res[i]);
//         sum = sum + num;
//     }
//     return sum;
// }

// Method 2
int findSum(string str)
{

    // Your code here
    int len = str.length();
    int num = 0;
    int sum = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            num = num * 10 + (str[i] - '0');
        }
        else
        {
            sum = sum + num;
            num = 0;
        }
    }
    return sum + num;
}

int main()
{
    string s = "geeks4geeks";
    int a = findSum(s);
    cout << a;
    return 0;
}