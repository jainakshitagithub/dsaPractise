#include<bits/stdc++.h>
using namespace std;

    // cout << typeid(str[i]).name()<<endl ;//to know the type of variable

bool isBinary(string str)
{
   // Your code here
   for(int i =0 ; i<str.length() ; i++)
   {
    if(str[i] != '0' && str[i]!='1')
    {
        return false;
    }
   }
   return true;
}

int main(){ 
    string str = "45";
    bool result = isBinary( str);
    cout<<"Result : "<<result;

     return 0;
}