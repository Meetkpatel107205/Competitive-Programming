#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        long long l,r;

        cin >> l >> r;

        if(l > r)
        {
            swap(l, r);
        }

        long long sum = 0;

        sum = (1LL * r * (r + 1)) / 2 - (1LL * l * (l - 1)) / 2;

        cout << sum << endl;
    }

    return 0;
}