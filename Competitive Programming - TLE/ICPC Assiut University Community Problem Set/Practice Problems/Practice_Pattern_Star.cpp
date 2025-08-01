#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int k = (n - i - 1); k > 0; k--)
        {
            cout << " ";
        }

        for(int j = (n - i); j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < (i - 1); k++)
        {
            cout << " ";
        }

        for(int j = 0; j < i; j++)
        {
            if(j == 0 && i == 0)
            {
                continue;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}