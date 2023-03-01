#include<bits/stdc++.h>
using namespace std;


    vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
        vector<long long> v;
        for(int i =1 ; i<=n ; i++)
        {
            int coef = 1;
            // for(int k = n-i ; k>0 ; k--)
            // {
            //     cout<<" ";
            // } // for creating spaces
            for(int j =1 ; j<=i ; j++)
            {
                // cout<<coef<<" ";
                 if(i==n){
                    v.push_back(coef);
                }
                coef = coef * (i-j)/j;//this formulae is derived by the binomial theorem
               
            }
            // cout<<endl;
        }
        return v;
    }

int main(){ 
    int n;
    cin>>n;

    vector<long long> v = nthRowOfPascalTriangle(n);

cout<<endl<<"Printing vector elements"<<endl;

    for(auto &i : v)
    {
        cout<<i<<" ";
    }
     return 0;
}