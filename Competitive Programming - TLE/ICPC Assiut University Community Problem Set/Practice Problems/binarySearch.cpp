#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int t)
{
    int result = -1;
    while(left <= right)
    {
        int mid = left + ((right - left)/2);

        if(arr[mid] == t)
        {
            result = mid;
            break;
        }

        if(t > arr[mid])
        {
            left = mid + 1;
        }

        if(t < arr[mid])
        {
            right = mid - 1;
        }
    }
    return result;
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
        for(int j = 0; j < n; j++)
        {
            if(a[j+1] < a[j])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    int t;

    cin >> t;

    int searchResult = binarySearch(a, 0, n-1, t);

    cout << searchResult;

    return 0;
}