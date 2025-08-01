#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;

    cin >> a >> b;

    int a_len = a.size();
    int b_len = b.size();

    string c = a + b;

    char a_first = a[0];
    char b_first = b[0];

    a[0] = b_first;
    b[0] = a_first;

    cout << a_len << " " << b_len << endl;
    cout << c << endl;
    cout << a << " " << b;

    return 0;
}