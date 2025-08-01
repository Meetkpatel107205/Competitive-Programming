#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int reverseArr[n];

    int idx = 0;

    for(int i = (n - 1); i >= 0; i--)
    {
        reverseArr[i] = a[idx];
        idx++;
    }

    for(int i = 0; i < n; i++)
    {
        cout << reverseArr[i] << " ";
    }

    return 0;
}