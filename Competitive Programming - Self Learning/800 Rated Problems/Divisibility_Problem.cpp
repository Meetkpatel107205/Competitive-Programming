#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        long long a,b;

        cin >> a >> b;

        long long rem = a % b;
        long long ans = (rem == 0) ? 0 : (b - rem);
        cout << ans << endl;
    }

    return 0;
}