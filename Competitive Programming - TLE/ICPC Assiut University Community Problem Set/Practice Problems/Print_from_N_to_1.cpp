#include<bits/stdc++.h>
using namespace std;

void Print_from_N_to_1(int a)
{
    if(a == 1)
    {
        cout << a;
        return;
    }
    else
    {
        cout << a << " ";
    }
    Print_from_N_to_1(--a);
}

int main()
{
    int n;

    cin >> n;

    Print_from_N_to_1(n);

    return 0;
}