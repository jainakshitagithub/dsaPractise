#include<bits/stdc++.h>
using namespace std;

 string longest(string names[], int n)
    {
        int max = 0;
        string s;
        for(int i =0 ;i<n ; i++)
        {
            int size = names[i].size();
            if(max<size)
            {
                max = size;
                s = names[i];
            }
        }
        return s;
    }

int main(){ 
    string n[5] = {"Geek", "Geeks", "Geeksfor",
  "GeeksforGeek", "GeeksforGeeks"};


 string s =  longest( n ,  5);
 cout<<s;


     return 0;
}