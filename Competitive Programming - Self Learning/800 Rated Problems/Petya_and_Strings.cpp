#include<bits/stdc++.h>
#include <cctype>
using namespace std;

int main()
{
    string a;
    string b;

    cin >> a >> b;

    int str_len = a.size();

    for(int i = 0; i < str_len; i++)
    {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }

    if(a < b)
    {
        cout << (-1);
    }
    else if(a > b)
    {
        cout << (1);
    }
    else
    {
        cout << (0);
    }

    return 0;
}