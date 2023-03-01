#include<bits/stdc++.h>
using namespace std;

   bool isAnagram(string s, string t) {
       int freqs[26] = {0} , freqt[26] = {0};
      for(char ch : s) freqs[ch-'a']++;
      for(char ch : t) freqt[ch-'a']++;

      for(int i=0 ; i<26 ; i++)
      {
        // cout<<freqs[i]<<" "<<freqt[i]<<endl;
        if(freqs[i]!=freqt[i])
        return false;
      }
    return true;

    }

int main(){ 
    string s = "anagram";
    string t = "nagaram";
    bool a = isAnagram(s , t);
    cout<<a<<endl;

     return 0;
}