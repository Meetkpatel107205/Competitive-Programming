#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    long long sumOfNNatural = ((n * (n + 1))/2);
    long long sumOfNNaturalSquare = sumOfNNatural*sumOfNNatural;
    
    long long sumOfSquareOfN = ((n*(n + 1)*(2*n + 1))/6);

    cout << sumOfNNaturalSquare - sumOfSquareOfN;

    return 0;
}