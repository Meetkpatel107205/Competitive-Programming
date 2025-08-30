#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int h, m;
        cin >> h >> m;
        int totalMinutes = 24 * 60;
        int current = h * 60 + m;
        cout << totalMinutes - current << "\n";
    }
    return 0;
}