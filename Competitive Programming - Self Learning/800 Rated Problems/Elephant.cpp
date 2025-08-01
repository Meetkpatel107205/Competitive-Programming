#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;

    cin >> x;

    int result = 0;

    while(x > 5)
    {
        x = x - 5;
        result++;
    }

    cout << (result+1);

    // Method - 2 :-

    // cout << ceil(x/5);

    // Method - 3 :-

    // cout << (x + 4)/5;

    return 0;
}