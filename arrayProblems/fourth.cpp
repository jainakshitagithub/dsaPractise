#include<bits/stdc++.h>
using namespace std;

//Not completed

   int numProvinces(vector<vector<int>> adj, int V) {
        // code here
    

    }

int main(){ 
    vector<vector <int>> vv;
    int N;//vector of vector size
    cin>>N;
    for(int i =0 ; i<N ;i++)
    {
        int n;
        cin>>n;
        vector<int> temp;
        for(int j =0 ;j<n ; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        vv.push_back(temp);
    }

for(int i =0 ; i<N ; i++)
{
    int y = vv[i].size();
    for(int j=0 ; j<y ; j++)
    {
        cout<<vv[i][j]<<" ";
    }
    cout<<endl;
}
    numProvinces(vv, N);


     return 0;
}