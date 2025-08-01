#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b;

    cin >> a >> b;

    if (abs(a - b) <= 1 && (a + b > 0))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    // if((a % 2) == 0 && (!(a == b && (a == 0 || a == 1))))
    // {
    //     if((b % 2) != 0)
    //     {
    //         cout << "YES";
    //     }
    //     else
    //     {
    //         cout << "NO";
    //     }
    // }
    // else if((a % 2 != 0) && (!(a == b && (a == 0 || a == 1))))
    // {
    //     if((b % 2) == 0)
    //     {
    //         cout << "YES";
    //     }
    //     else
    //     {
    //         cout << "NO";
    //     }
    // }
    // else if(a == 0 && b == 0)
    // {
    //     cout << "NO";
    // }
    // else
    // {
    //     cout << "YES";
    // }

    return 0;
}