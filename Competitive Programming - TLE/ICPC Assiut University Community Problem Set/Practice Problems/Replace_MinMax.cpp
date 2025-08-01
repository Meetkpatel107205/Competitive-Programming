#include<bits/stdc++.h>
using namespace std;

int findMin(int arr[], int s)
{
    int minVal = INT_MAX;
    int minIdx = -1;
    
    for(int i = 0; i < s; i++)
    {
        if(arr[i] < minVal)
        {
            minVal = arr[i];
            minIdx = i;
        }
    }
    
    return minIdx;
}

int findMax(int arr[], int s)
{
    int maxVal = INT_MIN;
    int maxIdx = -1;
    
    for(int i = 0; i < s; i++)
    {
        if(arr[i] > maxVal)
        {
            maxVal = arr[i];
            maxIdx = i;
        }
    }
    
    return maxIdx;
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

    int minIdx = findMin(a, n);
    int maxIdx = findMax(a, n);

    int temp = a[minIdx];
    a[minIdx] = a[maxIdx];
    a[maxIdx] = temp;

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}