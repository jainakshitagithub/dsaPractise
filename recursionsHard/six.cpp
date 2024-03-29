#include<bits/stdc++.h>
using namespace std;

    string getPermutation(int n, int k) {
        int fact = 1;
        string res = "";
        vector<int> numbers;
        for(int i=1 ; i<n ; i++)
        {
            fact = fact * i;
            numbers.push_back(i);
        }
        numbers.push_back(n);
        k = k-1;//0 based indexing
        while(true)
        {
            res = res + to_string(numbers[k/fact]);
            numbers.erase(numbers.begin() + k/fact);

            if(numbers.size()==0)
            break;

            k = k%fact;
            fact = fact / numbers.size();
        }
        return res;
    }

int main(){ 
    int n , k;
    cin>>n;
    cin>>k;
    string ans = getPermutation(n , k);
    cout<<ans<<endl;
     return 0;
}