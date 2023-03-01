#include<bits/stdc++.h>
using namespace std;

  int countCamelCase (string s)
    {
    	//code here.
        int sum = 0;
        for(int i =0 ; i<s.length() ; i++)
        {
            if(isupper(s[i]))
            {
                sum++;
            }
        }
        return sum;
    }

int main(){ 
    string s = "ckjkUUYII";
    int result =  countCamelCase ( s);
    cout<<result;
     return 0;
}