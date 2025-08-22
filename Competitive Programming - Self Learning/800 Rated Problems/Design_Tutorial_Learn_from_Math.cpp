#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    if (!(cin >> n)) return 0;

    if (n % 2 == 0) {
        cout << 4 << " " << n - 4 << "\n";
    } else {
        cout << 9 << " " << n - 9 << "\n";
    }
    return 0;
}

// Composite numbers = numbers that are not prime and greater than 1 (e.g. 4, 6, 8, 9, 10, ...).
