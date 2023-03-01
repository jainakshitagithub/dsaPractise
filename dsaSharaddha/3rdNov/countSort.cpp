#include <bits/stdc++.h>
using namespace std;

string countSort(string arr)
{
    int n = arr.length();
    string ans = "";
    int len = 27;
    vector<int> countArr(len, 0);

    for(int i = 0 ; i<n  ;i++){
        int ind = arr[i] - 'a';
        countArr[ind]++;
    }

    int i = 0; // countArr;
    int j = 0; // stringArr;
    while (i < len)
    {
        if (countArr[i] > 0)
        {
            char ch = i + 'a';
            ans += ch;
            countArr[i]--;
            j++;
        }
        else
            i++;
    }

    return ans;
}

int main()
{
    string s = "uwvlyhdrxbvyhygmcaszlp";
    string ans = countSort(s);
    cout << ans << endl;
    return 0;
}