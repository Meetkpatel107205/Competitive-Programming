#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;

        // Check if it's possible to form sum s using distinct numbers ≤ n
        long long max_possible_sum = 1LL * n * (n + 1) / 2;
        if (s > max_possible_sum)
        {
            cout << -1 << endl;
            continue;
        }

        long long sum = 0;
        int count = 0;
        int result[100005]; // large enough to hold all numbers up to n

        for (int i = n; i >= 1; i--)
        {
            if (s >= i)
            {
                s -= i;
                result[count++] = i;
            }
        }

        if (s == 0)
        {
            for (int i = 0; i < count; i++)
            {
                cout << result[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
