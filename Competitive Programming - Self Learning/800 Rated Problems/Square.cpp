#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int x[4], y[4];   // arrays to store 4 coordinates

        for (int i = 0; i < 4; i++)
        {
            cin >> x[i] >> y[i];   // read xi and yi
        }

        // now all 4 coordinates are stored in x[] and y[]
        int side = (x[0] - x[1] == 0) ? (y[0] - y[1]) : (x[0] - x[1]);

        cout << (side * side) << "\n";
    }

    return 0;
}