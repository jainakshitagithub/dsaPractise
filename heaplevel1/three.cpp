#include<bits/stdc++.h>
using namespace std;

vector<int> kClosestNumber(int arr[] , int n , int x , int k)
{
    priority_queue<pair<int , int>> maxi;
    vector<int> v;
    for(int i=0 ; i<n ; i++)
    {
        int key = abs(arr[i]-x);
        maxi.push({ key , arr[i]});
        if(maxi.size()>k)
        {
            maxi.pop();
        }
    }
    while(maxi.size()>0)
    {
        v.push_back(maxi.top().second);
        maxi.pop();
    }
    return v;
}

vector<int> klargestfrequency(int arr[] , int n , int k)
{
    unordered_map <int ,int> mp;
    priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int , int> >> mini;
    vector<int> res;

    for(int i=0 ; i<n ; i++)
    {
        mp[arr[i]]++;
    }

    for(auto &i : mp)
    {
        mini.push({i.second , i.first});
        if(mini.size()>k)
        {
            mini.pop();
        }
    }
    while(mini.size()>0)
    {
        res.push_back(mini.top().second);
        mini.pop();
    }
    return res;
}

vector<int> freqsort(int arr[] , int n)
{
    unordered_map <int ,int> mp;
    priority_queue<pair<int , int>> maxi;
    vector<int> res;

    for(int i=0 ; i<n ; i++)
    {
        mp[arr[i]]++;
    }

    for(auto &i : mp)
    {
        maxi.push({i.second , i.first});
    }
    while(maxi.size()>0)
    {
        res.push_back(maxi.top().second);
        maxi.pop();
    }
    return res;
}

int main(){ 
       int arr[] = {1,1,1,3,2,2,4};
     int n = sizeof(arr)/sizeof(int);
    //  int k ;
    //  cin>>k;


    vector<int> ans = freqsort(arr ,  n);
    for(int i=0 ; i<ans.size() ; i++)
    {
          cout<<ans[i]<<" ";
    }
    cout<<endl; 
     return 0;
}