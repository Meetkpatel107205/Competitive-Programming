#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        long long x, y, n;
        cin >> x >> y >> n; // Read x, y, n for this test case

        // Explanation of formula:
        // We want the largest k such that:
        // 1) 0 <= k <= n
        // 2) k % x == y
        //
        // Using modulo formula:
        // k % x = y  =>  k = x * q + y   (q is some integer >= 0)
        //
        // To make k <= n:
        // x * q + y <= n
        // x * q <= n - y
        // q <= (n - y) / x
        //
        // Largest q satisfying this is: q = (n - y) / x
        // So the largest k = x * q + y
        long long k = ((n - y) / x) * x + y;

        cout << k << "\n"; // Output the result
    }

    return 0;
}
