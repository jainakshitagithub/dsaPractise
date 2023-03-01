#include<bits/stdc++.h>
using namespace std;

void combinations(vector<int> v , int r)
{
    int n = v.size()-(r-1);
for(int i=0 ; i<v.size()-r ;i++)
{
    for(int j=i+1 ; j<=i+r ; j++)
    {
        cout<<v[i]<<" "<<v[j];
    }
    cout<<endl;
}
}
int main(){ 
    vector<int> v = {1,2,3,4};
    int r;
    cin>>r;
    combinations(v , r);

     return 0;
}