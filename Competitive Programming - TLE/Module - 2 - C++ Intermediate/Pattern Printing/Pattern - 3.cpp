#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin >> n;

    // for(int i = n; i > 0; i--)
    // {
    //     for(int j = 0; j < i; j++)
    //     {
    //         cout <<  "*";
    //     }
    //     cout << endl;
    // }

    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < (n - i); j++)
        {
            cout <<  "*";
        }
        cout << endl;
    }

    return 0;
}