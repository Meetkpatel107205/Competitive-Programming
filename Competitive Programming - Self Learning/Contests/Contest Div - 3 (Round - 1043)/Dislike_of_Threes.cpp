#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int liked[1005]; // array for first 1000 liked numbers
    int count = 0;

    // Precompute first 1000 liked numbers
    for (int x = 1; count < 1000; x++) {
        if (x % 3 != 0 && x % 10 != 3) {
            liked[count] = x;
            count++;
        }
    }

    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cout << liked[k - 1] << "\n";
    }
    return 0;
}
