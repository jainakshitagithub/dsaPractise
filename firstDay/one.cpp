#include <bits/stdc++.h>
using namespace std;

int countMin(string s)
{
    string str = s;
    int n = str.length();
    reverse(str.begin() ,str.end());

    cout<<"str"<<str<<endl;
    cout<<"s"<<s<<endl;
  
    if(s!=str)
    {
        for(int i =0 ; i<n ; i++)
        {
            // if(s[i] != s[n-i-1])
                s.push_back(s[n- i-1]);
                cout<<i<<" "<<s;
        }
        return 3;
    }
    else 
        return 0;
}

int main()
{

    string s;
    cin >> s;
    cout<<s.at(1);
    int result = countMin(s);
    cout<<result<<endl;

    return 0;
}

    // for (int i = 0; i < n/2; i++)
    // {
    //     swap(str[i], str[n - i-1]);
    // }//reverse