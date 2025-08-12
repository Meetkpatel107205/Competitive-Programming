#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int x,y,z;

        cin >> x >> y >> z;

        int sum = x + y + z;

        if((sum - x) == x || (sum - y) == y || (sum - z) == z)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << endl;
    }

    return 0;
}