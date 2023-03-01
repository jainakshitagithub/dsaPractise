#include<bits/stdc++.h>
using namespace std;

	// bool fascinating(int n) {
	//     string s = to_string(n) + to_string(n * 2) + to_string(n * 3);
	//     vector<int> hash(10, 0);
	//     for (char c : s) {
	//         // hash[c - '0']++;
    //        cout<<hash[c-'0']++;
	//     }
    //     cout<<endl;
	//     for (int i = 1; i <= 9; i++) {
    //         cout<<hash[i]<<" ";
	//         if (hash[i] != 1) {
	//             return false;
	//         }
	//     }
	//     return true;
	// }

    // bool fascinating(int n) {
	//     // code here
    //     for(char i = '1' ; i<='9' ; i++)
    //     {
    //        int c = 0;
    //        string s = to_string(n) + to_string(n * 2) + to_string(n * 3);
    //         for(int j =0 ;j<s.length() ; j++ )
    //         {
    //             char ch = s.at(j);
    //             if(ch==i)
    //             {
    //                 c++;
    //             }}

    //             if(c!=1)
    //             {
    //                 return false;
    //             }
    //         }
    //         return true;
    //     }
	
    bool fascinating(int n) {
        string s = to_string(n) + to_string(n * 2) + to_string(n * 3);
        for(char i = '1' ; i<='9' ; i++)
        {
           int c =0;
            for(int j =0 ; j<s.length() ; j++)
            {
                char ch = s.at(j);
                if(ch == i)
                {
                    c++;
                }
            }
            if(c!=1)
            {
                return false;
            }
        }
        return true;
    }

int main(){ 
    int n;
    cin>>n;
    bool a =  fascinating( n);
    cout<<a; 
     return 0;
}