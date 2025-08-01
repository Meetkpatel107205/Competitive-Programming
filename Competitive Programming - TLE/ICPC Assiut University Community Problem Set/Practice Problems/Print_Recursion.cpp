#include<bits/stdc++.h>
using namespace std;

void Print_Recursion(int a)
{
    if(a == 1)
    {
        cout << "I love Recursion";
        return;
    }
    else
    {
        cout << "I love Recursion" << endl;
        Print_Recursion(--a);
    }
}

int main()
{
    int n;

    cin >> n;

    Print_Recursion(n);

    return 0;
}