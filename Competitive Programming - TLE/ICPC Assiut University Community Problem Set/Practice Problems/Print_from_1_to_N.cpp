#include<bits/stdc++.h>
using namespace std;

void Print_from_1_to_N(int current, int a)
{
    if(current > a)
    {
        return;
    }

    cout << current << endl;

    Print_from_1_to_N(current + 1, a);
}

int main()
{
    int n;

    cin >> n;

    Print_from_1_to_N(1, n);

    return 0;
}