#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;

    cin >> a;

    int sum = 0;

    for(int i = 0; i < a.size(); i++)
    {
        // sum += stoi(a.substr(i, 1));
        sum += a[i] - '0';
    }

    cout << sum;

    return 0;
}