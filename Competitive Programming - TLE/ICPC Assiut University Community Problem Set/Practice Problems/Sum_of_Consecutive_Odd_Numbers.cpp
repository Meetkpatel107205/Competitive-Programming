#include<iostream>
using namespace std;

void printOddSum(int a, int b)
{
    int sum = 0;

    for(int j = (a + 1); j < b; j++)
    {
        if(j % 2 != 0)
        {
            sum += j;
        }
    }
    cout << sum << endl;
}

int main()
{
    int t;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n,m;

        cin >> n >> m;

        if(m > n)
        {
            printOddSum(n, m);
        }
        else
        {
            printOddSum(m, n);
        }
    }

    return 0;
}