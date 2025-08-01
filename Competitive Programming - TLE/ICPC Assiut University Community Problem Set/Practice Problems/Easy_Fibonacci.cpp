#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int a = 0, b = 1;

    int i = 0;

    do
    {
        cout << a << " ";

        int c = a + b;
        a = b;
        b = c;

        i++;
    } while (i < n);
    
    

    return 0;
}