#include<bits/stdc++.h>
using namespace std;

int main()
{

    char ch = '!';

    cout << ch << endl;

    int a,b;

    cin >> a >> b;

    cout << "a + b = " << (a+b) << endl << "a * b = " << (a*b) << endl << "a / (float)b = " << (a/(float)b)<< endl << "(double)a / b = " << ((double)a/b);

    int c = a / (double)b;

    cout << "int c = a / (double)b : " << c << endl;

    return 0;
}