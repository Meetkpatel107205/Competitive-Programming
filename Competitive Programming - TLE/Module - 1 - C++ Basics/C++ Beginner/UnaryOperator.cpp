#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a = 2;

    cout << "a before b = ++a : " << a << endl;

    int b = ++a;

    cout << "\na after b = ++a : " << a << endl;
    cout << "b after b = ++a : " << b << endl;

    int c = a++;

    cout << "\na after c = a++ : " << a << endl;
    cout << "c after c = a++ : " << c << endl;

    return 0;
}