#include<bits/stdc++.h>
#define LL long long
using namespace std;

LL Factorial(LL a)
{
    if(a == 0 || a == 1)
    {
        return 1;
    }

    return a*Factorial(a - 1);
}

int main()
{
    LL n;

    cin >> n;

    cout << Factorial(n);

    return 0;
}