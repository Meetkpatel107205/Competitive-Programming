#include<bits/stdc++.h>
using namespace std;

int MaxNumber(int a[], int idx, int s)
{
    if(idx == s - 1)
    {
        return a[idx]; // Base case: last element
    }

    // Get max from remaining part of array
    int maxInRest = MaxNumber(a, idx + 1, s);

    // Return max of current element and maxInRest
    return max(a[idx], maxInRest);
}

// 0  1 2 3  4
// 1 -3 5 4 -6
// maxInRest = -6 4 5
// -6 4 5 

int main()
{
    int n;

    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << MaxNumber(a, 0, n);

    return 0;
}