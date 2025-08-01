#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long A,B,C,D;

    cin >> A >> B >> C >> D;

    long double lhs = B * logl(A);  // A^B
    long double rhs = D * logl(C);  // C^D

    if(lhs > rhs)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}