#include<bits/stdc++.h>
using namespace std;

int calculate(int num)
{
    int toggle = 0;

    int sum = 0;

    for(int i = 1; i <= num; i++)
    {
        if(!toggle)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
        toggle = 1 - toggle;
    }

    return sum;
}

int main()
{
    int n;

    cin >> n;

    cout << calculate(n);

    return 0;
}