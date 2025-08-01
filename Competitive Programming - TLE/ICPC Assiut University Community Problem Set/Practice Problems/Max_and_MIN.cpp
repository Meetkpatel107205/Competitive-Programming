#include<bits/stdc++.h>
using namespace std;

int findMin(int arr[], int s)
{
    int min = INT_MAX;

    for(int i = 0; i < s; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int findMax(int arr[], int s)
{
    int max = INT_MIN;

    for(int i = 0; i < s; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
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

    cout << findMin(a, n) << " " << findMax(a, n);

    return 0;
}