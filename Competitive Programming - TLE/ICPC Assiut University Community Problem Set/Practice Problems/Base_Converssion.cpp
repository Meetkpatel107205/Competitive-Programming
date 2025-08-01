#include<bits/stdc++.h>
using namespace std;

void Decimal_To_Binary(int a)
{
    if(a <= 0)
    {
        return;
    }

    Decimal_To_Binary(a/2);
    cout << (a % 2);
}

int main()
{
    int t;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int temp;

        cin >> temp;

        Decimal_To_Binary(temp);

        cout << endl;
    }

    return 0;
}