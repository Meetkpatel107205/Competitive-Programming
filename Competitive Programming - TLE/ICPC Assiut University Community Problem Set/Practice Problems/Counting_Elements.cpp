#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int s, int target)
{
    int low = 0;
    int high = s - 1;

    while(low <= high)
    {
        int mid = low + ((high - low)/2);

        if(arr[mid] == target)
        {
            return true;
        }

        if(arr[mid] > target)
        {
            high = mid - 1;
        }

        if(arr[mid] < target)
        {
            low = mid + 1;
        }
    }

    return false;
}

int main()
{
    int n;

    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < (n - i - 1); j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        bool result = binarySearch(a, n, (a[i] + 1));

        if(result)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}