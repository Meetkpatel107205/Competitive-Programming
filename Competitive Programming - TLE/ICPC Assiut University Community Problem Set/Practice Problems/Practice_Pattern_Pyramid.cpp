#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < (n - i); j++)
        {
            cout << (j + 1);
        }

        for(int k = 0; k < (2*i); k++)
        {
            cout << "*";
        }

        for(int j = (n - i); j > 0; j--)
        {
            cout << (j);
        }
        cout << endl;
    }

    return 0;
}