#include<bits/stdc++.h>
using namespace std;

vector<int> prevSmaller(vector<int>arr){
    stack<int> st;
    vector<int> ans;
    for(int i=0 ; i<arr.size() ; i++){
        while(!st.empty() && arr[st.top()]>=arr[i])st.pop();
        if(st.empty())ans.push_back(-1);
        else ans.push_back(st.top());

        st.push(i);
    }

    return ans;
}

vector<int> nextSmaller(vector<int> arr){
    stack<int> st;
    vector<int> ans;
    for(int i=arr.size()-1 ; i>=0 ; i--){
        while(!st.empty() && arr[st.top()]>=arr[i])st.pop();
        if(st.empty())ans.push_back(arr.size());
        else ans.push_back(st.top());

        st.push(i);
    }
    reverse(ans.begin() , ans.end());

    return ans;
}

int maxAreaHistogram(vector<int> arr ){
    vector<int> ans;
  vector<int> prev = prevSmaller(arr);
  vector<int> next = nextSmaller(arr);
  int maxAns = 0;
  int curAns = 0;
  
  for(int i=0 ; i<arr.size() ; i++){
     curAns = (next[i] - prev[i] - 1)*arr[i];
     maxAns = max(curAns , maxAns);
     ans.push_back(curAns);
  }


return maxAns;


}
int main(){ 
    vector<int> arr = {4,2,1,5,6,3,2,4,2};
   int res = maxAreaHistogram(arr);
   cout<<res<<endl;
     return 0;
}