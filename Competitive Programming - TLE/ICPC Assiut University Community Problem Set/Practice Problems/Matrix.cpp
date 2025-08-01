#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;

    cin >> n;

    long long a[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    long long diag1 = 0;
    long long diag2 = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                diag1 += a[i][j];
            }

            if((i + j) == (n - 1))
            {
                diag2 += a[i][j];
            }
        }
    }

    cout << abs(diag2 - diag1);

    return 0;
}