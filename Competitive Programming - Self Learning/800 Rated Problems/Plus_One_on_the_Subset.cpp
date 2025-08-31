#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long a[55]; // since n ≤ 50
        for (int i = 0; i < n; i++) cin >> a[i];

        long long maxVal = a[0], minVal = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] > maxVal) maxVal = a[i];
            if (a[i] < minVal) minVal = a[i];
        }

        cout << (maxVal - minVal) << "\n";
    }
    return 0;
}