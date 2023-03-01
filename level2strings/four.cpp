#include <bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(string str)
{
    // Your code here
    int count;
    int max = 0;
    char result = 'z';
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        count = 0;
        for (int j = 0; j < len; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }

        if (max < count)
        {
            result = str[i];
            max = count;
        }
        else if (max == count)
        {
            if (result > str[i])
            {
                result = str[i];
            }
        }
        cout << "String : " << str[i] << endl;
        cout << "Max : " << max << endl;
    }
return result;
}



int main()
{
    string str = "vhqvoi";
    char result = getMaxOccuringChar(str);
    cout << result;
    return 0;
}