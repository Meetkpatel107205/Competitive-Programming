#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3;

    cin >> x1 >> x2 >> x3;

    int avg = ((x1 + x2 + x3)/3);

    int min_dist = abs(x1 - avg) + abs(x2 - avg) + abs(x3 - avg);

    cout << min_dist;

    return 0;
}