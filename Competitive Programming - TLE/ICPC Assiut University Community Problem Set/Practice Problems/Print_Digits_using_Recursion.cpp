#include <bits/stdc++.h>
using namespace std;

void Print_Digits(long long a)
{
    if (a == 0)
    {
        cout << "0 ";
        return;
    }

    if (a < 0)
    {
        a = -a;
    }

    if (a / 10 != 0)
    {
        Print_Digits(a / 10);
    }

    cout << a % 10 << " ";
}

int main()
{
    long long t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long temp;
        cin >> temp;
        Print_Digits(temp);
        cout << endl;
    }

    return 0;
}
