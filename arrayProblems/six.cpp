#include<bits/stdc++.h>
using namespace std;

//mycode
	// void zigZag(int arr[], int n) {
	//     // code here
    //     int i =0;
    //     while(i<n)
    //     {
    //         if(!(arr[i]<arr[i+1]))
    //         {
    //             swap(arr[i] , arr[i+1]);
    //         }
    //         i++;
    //         if(!(i<n-1))
    //         {
    //             i--;
    //         }
    //         if(!(arr[i]>arr[i+1]))
    //         {
    //             swap(arr[i] , arr[i+1]);
    //         }
    //         i++;
    //     }
    //     for(int i =0 ; i<n ; i++)
    //     {
    //         cout<<arr[i]<<" ";
    //     }
	// }

// website code
    void zigZag(int arr[], int n) {
	    // Flag true indicates relation "<" is expected,
	    // else ">" is expected. The first expected relation
	    // is "<"
	    bool flag = true;

	    for (int i = 0; i <= n - 2; i++) {
	        if (flag) /* "<" relation expected */
	        {
	            /* If we have a situation like A > B > C,
	            we get A > B < C by swapping B and C */
	            if (arr[i] > arr[i + 1]) swap(arr[i], arr[i + 1]);
	        } else /* ">" relation expected */
	        {
	            /* If we have a situation like A < B < C,
	            we get A < C > B by swapping B and C */
	            if (arr[i] < arr[i + 1]) swap(arr[i], arr[i + 1]);
	        }
	        flag = !flag; /* flip flag */
	    }
           for(int i =0 ; i<n ; i++)
        {
            cout<<arr[i]<<" ";
        }
	}

int main(){ 
    // int a[] = {6202,4625,5469,2038,5916,3405,5533,7004,2469,9853,4992,361,9819,3294,7195,4036,9404,8767,5404,1711,3214,3100,3751,2139,5437,4993,1759,9572,6270,3789,9623,2472,9493};
    // int size =  sizeof(a)/sizeof(a[0]);
    // zigZag(a , size);

       int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
         for(int i =0 ; i<n ; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        zigZag(arr, 7);
    }
     return 0;
}

// 6202 4625 5469 2038 5916 3405 5533 7004 2469 9853 4992 361 9819 3294 7195 4036 9404 8767 5404 1711 3214 3100 3751 2139 5437 4993 1759 9572 6270 3789 9623 2472 9493