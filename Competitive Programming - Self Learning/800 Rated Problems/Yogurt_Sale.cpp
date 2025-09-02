#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        int cost = (n / 2) * min(2 * a, b) + (n % 2) * a;
        cout << cost << "\n";
    }
    return 0;
}

// Key Idea:

// For each pair of yogurts, the cost can be:

// 2 * a (buy them separately), OR b (promotion price).

// Choose the minimum of the two.
// If n is odd, one yogurt will be left over → buy it at price a.

// So formula:

// cost = (𝑛 / 2) * min(2 * 𝑎, 𝑏) + (𝑛 mod 2) * 𝑎