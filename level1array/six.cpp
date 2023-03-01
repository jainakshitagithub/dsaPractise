#include<bits/stdc++.h>
using namespace std;

	long long seriesSum(int n) {
	    // code here
        long long sum = ((long long)n*((long long)n+1)/2);
                return sum;
	}

int main(){ 
    int n;
    cin>>n;
  int a=  seriesSum(n);
  cout<<a;
     return 0;
}