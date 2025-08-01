#include <bits/stdc++.h>
using namespace std;
 
int countSubArray(int arr[], int n)
{
    int count = 0;
 
    // Iterate over all subarrays
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            bool isIncreasing = true;

            // Check if subarray arr[i..j] is increasing
            for (int k = i + 1; k <= j; k++)
            {
                if (arr[k] < arr[k - 1])
                {
                    isIncreasing = false;
                    break; // No need to check further
                }
            }

            if (isIncreasing)
            {
                count++;
            }
        }
    }

    return count;
}
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int size;
        cin >> size;
 
        int a[size];
        for (int i = 0; i < size; i++)
        {
            cin >> a[i];
        }
 
        cout << countSubArray(a, size) << endl;
    }

    return 0;
}
