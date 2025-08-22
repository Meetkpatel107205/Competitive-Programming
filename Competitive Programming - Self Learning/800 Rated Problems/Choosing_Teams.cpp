#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int y[n];
    int eligible = 0;

    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }

    for (int i = 0; i < n; i++) {
        if (y[i] <= 5 - k) {
            eligible++;
        }
    }

    cout << eligible / 3 << "\n";
    return 0;
}
