#include<bits/stdc++.h>
using namespace std;

int findMin(int arr[], int s)
{
    int min_Ele = INT_MAX;

    for(int i = 0; i < s; i++)
    {
        if(arr[i] < min_Ele)
        {
            min_Ele = arr[i];
        }
    }

    return min_Ele;
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

    int minEle = findMin(a, n);

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == minEle)
        {
            count++;
        }
    }

    if(count % 2 != 0)
    {
        cout << "Lucky";
    }
    else
    {
        cout << "Unlucky";
    }

    return 0;
}