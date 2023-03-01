#include <bits/stdc++.h>
using namespace std;

vector<float> streamAvg(int arr[], int n)
{
    // code here
     vector<float> v;
    float sum = 0;
    for(int i =0 ;i<n ; i++)
    {
        sum = sum + arr[i];
        float avg = sum/ (i+1);
        cout<<"Sum: "<<sum<<endl;
        cout<<"Average: "<<avg<<endl;
        v.push_back(avg);
    }
    return v;
}

int main()
{
    int n = 2;
    int arr[] = {12, 2};
    vector<float> v = streamAvg(arr, n);

    for (float &value : v)
    {
        setprecision(2);
        cout << value << " ";
    }

    return 0;
}