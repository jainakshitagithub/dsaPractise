#include<bits/stdc++.h>
using namespace std;

//Time Complexity = 0(n) , Space complexity = 0(n)
// vector<int> repeatedNumber(const vector<int> &A) {
//     vector<int> ans;
//     unordered_map<int , int> m;
//     // int min = INT_MAX;
//     int max = 0;
//     for(int i=0 ; i<A.size() ; i++)
//     {
//         // if(min>A[i])min = A[i];
//         if(max<A[i])max = A[i];
//         m[A[i]]++;
//         if(m[A[i]]>1)
//         ans.push_back(A[i]);
//     }

//     for(int i = 1 ; i <= max ; i++)
//     {
//         auto it = find(A.begin() , A.end() , i);
//         if(it==A.end())
//         ans.push_back(i);
//     }
//     return ans;
// }
vector<int> repeatedNumber(const vector<int> &A) {
    int max_ele = *max_element(A.begin() , A.end());
    int sumN = 0 , sumNs = 0;
    int sumArr = 0 , sumArrs = 0;
    for(int i=1 ; i<=max_ele ; i++)
    {
        sumN += i;
        sumN += i*i;
    }

    for(int i=0 ; i<=A.size() ; i++)
    {
        sumArr += A[i];
        sumArrs +=  A[i] *  A[i];
    }
    
}
int main(){ 
    vector<int> a = {4,3,2,3};
    vector<int> res = repeatedNumber(a);
    for(int &i : res)
    cout<<i<<" ";

     return 0;
}