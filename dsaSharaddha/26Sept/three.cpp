#include<bits/stdc++.h>
using namespace std;

    bool isValid(string s) {
        stack<int> st;
        for(int i=0 ; i<s.length() ; i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            st.push(s[i]);
            else {
                if(st.empty())
                return false;

                char c = st.top();
                if((c == '(' && s[i]==')') || (c == '{' && s[i]=='}') || (c == '[' && s[i]==']')  )
                st.pop();
                else
                return false;
            }
        }
        if(st.empty())return true;
        return false;
    }
int main(){ 
    string s = "([])";
    bool a = isValid(s);
    cout<<a<<endl;

     return 0;
}