#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int a)
{
    int sod = 0;

    while(a > 0)
    {
        int last = a % 10;
        sod += last;
        a = a / 10;
    }

    return sod;
}

int main()
{
    int n,a,b;

    cin >> n >> a >> b;

    int some_sums = 0;

    for(int i = 1; i <= n; i++)
    {
        int sum = sumOfDigits(i);

        if(sum >= a && sum <= b)
        {
            some_sums += i;
        }
    }

    cout << some_sums;

    return 0;
}