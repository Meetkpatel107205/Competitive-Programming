#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long front = 0;
    long long rear = n - 1;

    for(int i = 0; i <= (n/2); i++)
    {
        if(i == (n/2))
        {
            if(n % 2 == 1)  // odd number of elements: print middle only
            {
                cout << a[front];
            }
        }
        else
        {
            cout << a[front] << " " << a[rear] << " ";
        }

        front++;
        rear--;
    }
    return 0;
}
