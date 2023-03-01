#include<bits/stdc++.h>
using namespace std;

void  kclosestorigin(int arr[][2] ,  int k , int n)
{
    priority_queue<pair<int , pair<int , int>>> maxi;
    for(int i = 0 ; i<n ; i++)
    {
        maxi.push({arr[i][0]*arr[i][0] + arr[i][1]*arr[i][1] , {arr[i][0] , arr[i][1]} });
        if(maxi.size()>k)
        {
            maxi.pop();
        }
    }
    while(maxi.size()>0)
    {
        pair<int , int> p = maxi.top().second;
        cout<<p.first<<" "<<p.second<<endl;
        maxi.pop();
    }

    
}



int main(){ 
    int arr[4][2]  = {{1,3} , {-2,2} , {5,8} , {0,1}};
    int k;
    cin>>k;
    kclosestorigin( arr , k , 4);
     return 0;
}