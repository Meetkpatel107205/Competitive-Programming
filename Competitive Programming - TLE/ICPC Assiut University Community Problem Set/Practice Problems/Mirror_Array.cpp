#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    int n;

    cin >> n;

    for(int i = 0; i < t; i++)
    {
        int a[n];

        for(int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        for(int k = (n - 1); k >= 0; k--)
        {
            cout << a[k] << " ";
        }
        cout << endl;
    }

    return 0;
}