#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < (n - i); j++)
        {
            cout << char(j + 65);
        }

        for(int k = 0; k < ((2*i) - 1); k++)
        {
            cout << " ";
        }

        for(int m = (n - i); m > 0; m--)
        {
            if(char(m + 65 - 1) == ((n - i) + 65 - 1))
            {
                continue;
            }
            else
            {
                cout << char(m + 65 - 1);
            }
        }
        cout << endl;
    }

    return 0;
}