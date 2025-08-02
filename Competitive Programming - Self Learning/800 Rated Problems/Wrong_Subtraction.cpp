#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;

    cin >> n >> k;

    while (k--)
    {
        int last2 = n % 10;

        if(last2 != 0)
        {
            n = n - 1;
        }
        else if(last2 == 0)
        {
            n = n / 10;
        }
    }

    cout << n;

    return 0;
}