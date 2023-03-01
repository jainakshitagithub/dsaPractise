#include<bits/stdc++.h>
using namespace std;

 string UncommonChars(string A, string B)
        {
            unordered_set<char> s1;
            unordered_set<char> s2;

            set<char> ss;
            string result;
            for(int i =0 ; i<A.length() ; i++)
            {
                s1.insert(A[i]);
                
            }
            for(int i=0 ; i<B.length() ; i++)
            {
                s2.insert(B[i]);
                if(!s1.count(B[i]))
                {
                    ss.insert(B[i]);
                }
            }
             for(int i =0 ; i<A.length() ; i++)
            {
                if(!s2.count(A[i]))
                {
                    ss.insert( A[i]);
                }
            }

            for(auto &it : ss)
            {
                result+=it;
            }         
            if(result.length()==0)
            {
                result="-1";
            }

    return result;
        }

int main(){ 
    string a = "geeks";
    string b = "geeks";

    string result = UncommonChars(a , b);
    cout<<result;

     return 0;
}