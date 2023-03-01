#include<bits/stdc++.h>
using namespace std;

 string chartostr(char arr[] , int n)
    {
        //code here
        string s;
        for(int i =0 ; i<n ; i++)
        {
            if(arr[i]!='\0')
            {
                s.push_back(arr[i]);
            }
        }
        return s;
    }

int main(){ 
    int n = 13;
    char arr[] = {'g', 'e', 'e', 'k', 's', 'f', 'o', 'r', 'g', 'e', 'e', 'k', 's' , '\0'};
    string s = chartostr( arr ,  n);
    cout<<s;
     return 0;
}