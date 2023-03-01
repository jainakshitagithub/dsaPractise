#include <bits/stdc++.h>
using namespace std;

// int maxProfit(vector<int> &prices)
// {
//     int n = prices.size(), k, l;
//     int buyPrice = INT_MAX, sellPrice = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (buyPrice > prices[i])
//         {
//             buyPrice = prices[i];
//             k = i;
//         }
//     }

//     for (int i = k + 1; i < n; i++)
//     {
//         if (sellPrice < prices[i])
//         {
//             sellPrice = prices[i];
//         }
//     }
    
//     return (sellPrice - buyPrice < 0) ? 0 : sellPrice - buyPrice;
// }

int maxProfit(vector<int> &prices)//this is optimized
{
    int n = prices.size(), k, l;
    int buyPrice = INT_MAX, maxP = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (buyPrice > prices[i])
        {
            buyPrice = prices[i];
        }
        if(prices[i]-buyPrice > maxP)
        {
            maxP = prices[i]-buyPrice ;
        }
    }

    return maxP;
}
int main()
{
    vector<int> nums = {7, 1, 5, 3, 6, 4};
    int ans = maxProfit(nums);
    cout << ans;
    return 0;
}