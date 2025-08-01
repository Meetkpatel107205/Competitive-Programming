#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;

    cin >> a >> b;

    cout << (a < b ? a : b); // ---> Compare Strings Lexicographically

    // int a_len = a.length();
    // int b_len = b.length();

    // int min_len = min(a_len, b_len);

    // for(int i = 0; i < min_len; i++)
    // {
    //     if(a[i] != b[i])
    //     {
    //         if(a[i] < b[i])
    //         {
    //             cout << a[i];
    //             break;
    //         }
    //         else
    //         {
    //             cout << b[i];
    //             break;
    //         }
    //     }
    //     else
    //     {
    //         cout << a[i];
    //     }
    // }

    return 0;
}