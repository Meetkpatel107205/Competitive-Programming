#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int k = i; k < n; k++)
        {
            cout << " ";
        }

        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < (n - i - 1); k++)
        {
            cout << " ";
        }

        for(int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}