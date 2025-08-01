#include<bits/stdc++.h>
using namespace std;

int Print_SuffixSum(int arr[], int s, int t)
{
    int sum = 0;

    if(s < t)
    {
        return sum;
    }

    sum += arr[s-1] + Print_SuffixSum(arr, s - 1, t);
}

int main()
{
    int n;

    cin >> n;

    int k;

    cin >> k;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << Print_SuffixSum(a, n, k);

    return 0;
}