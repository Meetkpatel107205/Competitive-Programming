#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;

    cin >> a;

    int a_len = a.size();

    for(int i = 0; i < a_len; i++)
    {
        if(a[i] >= 65 && a[i] <= 90)
        {
            a[i] = a[i] + 32;
        }
        else if(a[i] >= 97 && a[i] <= 122)
        {
            a[i] = a[i] - 32;
        }
        else if(a[i] == ',')
        {
            a[i] = ' ';
        }
    }

    cout << a;

    return 0;
}