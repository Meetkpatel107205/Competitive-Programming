#include<bits/stdc++.h>
using namespace std;

int main()
{

    cout << fixed << setprecision(3);

    float a;

    cin >> a;

    int integerPart = int(a);
    float decimalPart = a - int(a);

    if(decimalPart == 0)
    {
        cout << "int " << integerPart;
    }
    else
    {
        cout << "float " << integerPart << " " << decimalPart;
    }

    return 0;
}