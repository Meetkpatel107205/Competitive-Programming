#include<iostream>
using namespace std;

void printAndSum(int a, int b)
{
    int sum = 0;

    for(int i = a; i <= b; i++)
    {
        cout << i << " ";
        sum += i;
    }

    cout << "sum =" << sum << endl;
}

int main()
{

    int n, m;

    do
    {
        cin >> n >> m;

        if(m > 0 && n > 0)
        {
            if(m > n)
            {
                printAndSum(n, m);
            }
            else
            {
                printAndSum(m, n);
            }
        }
    } while (n > 0 && m > 0);

    return 0;
}