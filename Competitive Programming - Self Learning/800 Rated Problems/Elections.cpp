#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long max_num = max({a, b, c});

        // For each candidate independently
        long long A = (a == max_num && (a > b && a > c)) ? 0 : (max_num - a + 1);
        long long B = (b == max_num && (b > a && b > c)) ? 0 : (max_num - b + 1);
        long long C = (c == max_num && (c > a && c > b)) ? 0 : (max_num - c + 1);

        cout << A << " " << B << " " << C << "\n";
    }
    return 0;
}