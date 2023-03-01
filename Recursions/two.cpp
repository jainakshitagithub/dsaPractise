#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int N)
{
    set<int> hashSet;
    for (int i = 0; i < N; i++)
    {
        hashSet.insert(arr[i]);
    }
    int longestStreak = 0;
    int countStreak;
    int currentNum;
    for (int i = 0; i < N; i++)
    {
        if (!hashSet.count(arr[i] - 1))
        {
            currentNum = arr[i];
            countStreak = 1;
            while (hashSet.count(currentNum + 1))
            {
                currentNum += 1;
                countStreak += 1;
            }
            longestStreak = max(longestStreak , countStreak);
        }
    }
    return longestStreak;
}

int main()
{
    int arr[] = {1,9,3,10,4,20,2};
    int n = 7;
    int result = findLongestConseqSubseq(arr, n);
    cout << result << endl;
    return 0;
}