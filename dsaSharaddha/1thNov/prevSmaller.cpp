#include<bits/stdc++.h>
using namespace std;

vector<int> prevSmaller(vector<int> arr){
    stack<int> st;
    vector<int> ans;
    for(int i=0 ; i<arr.size() ; i++){
        while(!st.empty() && st.top()>=arr[i])st.pop();

        if(st.empty())ans.push_back(-1);
        else ans.push_back(st.top());

        st.push(arr[i]);
    }
    return ans;
}

vector<int> nextSmaller(vector<int> arr){
    stack<int> st;
    vector<int> ans;
    for(int i=arr.size()-1 ; i>=0 ; i--){
        while(!st.empty() && st.top()>=arr[i])st.pop();

        if(st.empty()){
            ans.push_back(-1);
        }else ans.push_back(st.top());

        st.push(arr[i]);
    }
    reverse(ans.begin() , ans.end());
    return ans;
}
int main(){ 
    // vector<int> arr = {4,10,5,18,3,12,7};
    vector<int> arr = {3,10,5,1,15,10,7,6};

    // vector<int> prevRes = prevSmaller(arr);
    vector<int> nextRes = nextSmaller(arr);

    for(int &i : nextRes)cout<<i<<" ";
    cout<<endl;
     return 0;
}