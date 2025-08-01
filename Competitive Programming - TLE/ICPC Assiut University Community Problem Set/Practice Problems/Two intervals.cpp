#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long left = max(A, C);
    long long right = min(B, D);

    if (left <= right)
        cout << left << " " << right;
    else
        cout << -1;

    return 0;
}
