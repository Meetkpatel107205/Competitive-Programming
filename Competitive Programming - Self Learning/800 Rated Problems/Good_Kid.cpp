#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long maxProduct = 0;

        for (int i = 0; i < n; i++)
        {
            a[i]++;  // add 1 to this digit

            long long product = 1;
            for (int j = 0; j < n; j++)
            {
                product *= a[j];
            }

            if (product > maxProduct)
            {
                maxProduct = product;
            }

            a[i]--;  // restore
        }

        cout << maxProduct << "\n";
    }
    return 0;
}
