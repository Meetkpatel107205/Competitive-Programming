#include <iostream>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int a[100005]; // since total n across all test cases ≤ 10^5

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int count = 0;
        int i = 0;

        while (i <= n - k) {
            bool canHike = true;

            // Check if next k days are good weather
            for (int j = i; j < i + k; ++j) {
                if (a[j] != 0) {
                    canHike = false;
                    break;
                }
            }

            if (canHike) {
                count++;
                i += k + 1; // skip hike days + 1 rest day
            } else {
                i++; // move to next day
            }
        }

        cout << count << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
