#include<bits/stdc++.h>
using namespace std;

long long fib(long long a)
{
    if(a == 1)
    {
        return 0;
    }

    if(a == 2)
    {
        return 1;
    }

    long long x = 0,y = 1,c;

    for(int i = 3; i <= a; i++)
    {
        c = x + y;
        x = y;
        y = c;
    }

    return y;
}

int main()
{

    long long n;

    cin >> n;

    cout << fib(n);

    return 0;
}