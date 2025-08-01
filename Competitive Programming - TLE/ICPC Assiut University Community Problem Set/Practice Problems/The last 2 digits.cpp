#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long a,b,c,d;

    cin >> a >> b >> c >> d;

    int mul = ((a*b)*(c*d));

    // int result = 0;

    // int k = 1;
    // int iter = 0;

    // while(iter < 2)
    // {
    //     int last = mul % 10;
    //     result = result + (last*k);
    //     mul = mul/10;
    //     k = k*10;
    //     iter++;
    // }

    cout << (mul % 100);

    return 0;
}