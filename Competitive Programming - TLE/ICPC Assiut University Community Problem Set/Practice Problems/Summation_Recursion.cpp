#include<bits/stdc++.h>
using namespace std;

long long Summation(long long a[], long long idx, long long s)
{
    if(idx == s - 1)
    {
        return a[idx]; // Base case: last element
    }

    return a[idx] + Summation(a, idx + 1, s);
}

int main()
{
    long long n;

    cin >> n;

    long long a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << Summation(a, 0, n);

    return 0;
}