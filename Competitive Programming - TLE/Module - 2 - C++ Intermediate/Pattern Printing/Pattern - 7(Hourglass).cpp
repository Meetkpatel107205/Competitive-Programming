#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < i; k++)
        {
            cout << " ";
        }

        for(int j = (2*(n-i) - 1); j > 0; j = j - 2)
        {
            cout << "*";
        }

        for(int l = 0; l < (n-i-1); l++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }

        for(int k = 0; k < ((2*i)+1); k++)
        {
            cout << "*";
        }

        for(int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}