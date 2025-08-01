#include<bits/stdc++.h>
using namespace std;

int main()
{

    char ch;

    cin >> ch;

    if(ch != 'z')
    {
        cout << char(int(ch) + 1);
    }
    else
    {
        cout << "a";
    }

    return 0;
}