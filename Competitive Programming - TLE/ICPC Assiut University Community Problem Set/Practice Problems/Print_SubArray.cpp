#include <bits/stdc++.h>
using namespace std;

void printSubArray(int arr[], int n)
{
    int count = 0;

    // Step 1: Iterate over start index
    for (int i = 0; i < n; i++)
    {
        // Step 2: Iterate over end index
        for (int j = i; j < n; j++)
        {
            bool isIncreasing = true; // ✅ Reset for each subarray
            int curr = arr[i]; // Start with the first element

            // Step 3: Print subarray and check if increasing
            cout << arr[i] << " ";
            for (int k = i + 1; k <= j; k++)
            {
                cout << arr[k] << " ";
                if (arr[k] < arr[k - 1]) // check increasing condition
                {
                    isIncreasing = false;
                }
            }

            if (isIncreasing)
            {
                count++;
            }

            cout << endl;
        }
    }

    cout << "\nCount of Increasing Subarrays: " << count << endl;
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

        printSubArray(a, size);
    }

    return 0;
}
