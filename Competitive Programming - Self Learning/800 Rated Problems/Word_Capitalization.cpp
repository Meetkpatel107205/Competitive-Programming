#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;

    cin >> a;

    if(int(a[0]) >= 97 && int(a[0]) <= 122)
    {
        a[0] = char(int(a[0]) - 32);
    }

    cout << a;

    return 0;
}