#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;

    cin >> n;

    long long a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    cout << abs(sum);

    return 0;
}