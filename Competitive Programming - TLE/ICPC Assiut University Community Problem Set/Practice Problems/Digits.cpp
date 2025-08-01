#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        long long temp;

        cin >> temp;

        if(temp == 0)
        {
            cout << 0 << endl;
            continue;
        }

        while(temp > 0)
        {
            long long last = temp % 10;
            temp = temp / 10;
            cout << last << " ";
        }

        cout << endl;
    }
    return 0;
}