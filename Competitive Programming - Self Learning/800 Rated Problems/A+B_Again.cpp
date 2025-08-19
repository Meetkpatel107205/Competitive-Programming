#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int a)
{
    int sum = 0;

    while(a > 0)
    {
        int last = a % 10;

        sum += last;

        a = a / 10;
    }

    return sum;
}

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n;

        cin >> n;

        cout << sumOfDigits(n) << endl;
    }

    return 0;
}