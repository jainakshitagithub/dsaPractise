#include <bits/stdc++.h>
using namespace std;

// long binarySubstring(int n, string a)
// {

//     // Your code here
//     long count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == '1')
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if (a[j] == '1')
//                 {
//                     count++;
//                 }
//             }
//         }
//     }
//     return count;
// }

// Optimizing the code - >But this method also take the same time even it is O(n)
// long binarySubstring(int n, string a)
// {

//     // Your code here
//     long count = 0;
//     int i = 0;
//     int j = i + 1;

//     while (i < n)
//     {
//         if (j >= n )
//         {
//             i++;
//             j = i + 1;
//         }
//         if (a[i] == '1')
//         {

//             if (a[j] == '1')
//             {
//                 count++;
//             }
//             j++;
//         }
//     }
//     return count;
// }

//Method 3 -->Optimizing the code
long binarySubstring(int n, string a)
{
    int count = 0;
    for(int i = 0 ;i<n ; i++)
    {
        if(a[i]=='1')
        {
            count++;
        }
    }
    long result =(long) ( count *( count-1 ) )/2;
    return result;
}

int main()
{

    int n = 7;
    string s = "1100011";
    long result = binarySubstring(n, s);
    cout << result << endl;

    return 0;
}