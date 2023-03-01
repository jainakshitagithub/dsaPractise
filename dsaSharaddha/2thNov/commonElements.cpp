#include <bits/stdc++.h>
using namespace std;

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    map<int, int> mp;
    vector<int> ans;
    for (int i = 0; i < n1; i++)
    {
        if (!mp.count(A[i]))
            mp[A[i]]++;
    }



    for (int i = 0; i < n2; i++)
    {
        if (mp.count(B[i]) && mp[B[i]] == 1)
            mp[B[i]]++;
    }



    for (int i = 0; i < n3; i++)
    {
        if (mp.count(C[i]) && mp[C[i]] == 2)
            mp[C[i]]++;
    }



    for(auto &it : mp){
        if(it.second==3)ans.push_back(it.first);
    }
    return ans;
}

int main()
{
    int n1 = 6;
    int A[] = {1, 5, 10, 20, 40, 80};
    int n2 = 5;
    int B[] = {6, 7, 20, 80, 100};
    int n3 = 8;
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};

    vector<int> ans = commonElements(A, B, C, n1, n2, n3);
    for (int &i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}