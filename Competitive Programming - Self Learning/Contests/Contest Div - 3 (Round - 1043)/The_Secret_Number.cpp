#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    long long pow10[19];
    pow10[0] = 1;
    for (int i = 1; i < 19; i++)
    {
        pow10[i] = pow10[i - 1] * 10;
    }

    while (t--) 
    {
        long long n;
        cin >> n;

        long long res[20];  // at most 18 possible x
        int cnt = 0;

        for (int k = 1; k <= 18; k++)
        {
            long long denom = 1 + pow10[k];

            if (denom > n)
            {
                break;
            }

            if (n % denom == 0)
            {
                long long x = n / denom;
                if (x > 0)
                {
                    res[cnt++] = x;
                }
            }
        }

        if (cnt == 0)
        {
            cout << 0 << "\n";
        } 
        else
        {
            // simple bubble sort
            for (int i = 0; i < cnt; i++)
            {
                for (int j = i + 1; j < cnt; j++)
                {
                    if (res[i] > res[j])
                    {
                        long long temp = res[i];
                        res[i] = res[j];
                        res[j] = temp;
                    }
                }
            }

            cout << cnt << "\n";
            for (int i = 0; i < cnt; i++)
            {
                cout << res[i];
                if (i + 1 < cnt)
                {
                    cout << " ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
