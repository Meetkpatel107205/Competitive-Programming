#include<bits/stdc++.h>
using namespace std;

void Pyramid(int a)
{
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < (a - i - 1); j++)
        {
            cout << " ";
        }

        for(int k = 0; k < ((2*i) + 1); k++)
        {
            cout << "*";
        }

        if(i == (a - 1))
        {
            break;
        }
        else
        {
            cout << endl;
        }
    }
}

int main()
{
    int n;

    cin >> n;

    Pyramid(n);

    return 0;
}