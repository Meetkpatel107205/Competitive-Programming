#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        int d = x % 10;   // last digit (all are same)
        int k = 0;        // number of digits

        int temp = x;
        while (temp > 0) {
            k++;
            temp /= 10;
        }

        int ans = 10 * (d - 1) + k * (k + 1) / 2;
        cout << ans << "\n";
    }
    return 0;
}