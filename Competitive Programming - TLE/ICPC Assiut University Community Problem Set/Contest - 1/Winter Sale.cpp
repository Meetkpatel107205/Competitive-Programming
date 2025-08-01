#include<bits/stdc++.h>
using namespace std;

int main()
{
    double X,P;

    cout << fixed << setprecision(2);

    cin >> X >> P;

    double result = (P/(1 - (X/100)));

    cout << result;

    return 0;
}