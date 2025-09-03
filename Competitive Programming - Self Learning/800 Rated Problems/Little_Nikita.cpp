#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        if (m <= n && (n - m) % 2 == 0) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}

// 1. Moves ka nature

// Har move me ya to +1 (cube add) ya -1 (cube remove) hoga.
// Matlab after n moves, final cube count = (#adds) - (#removes).

// 2. Total moves = n

// Let’s say:

// Adds = x
// Removes = y

// Toh:

// x + y = n    (total moves)
// x - y = m    (final cubes)

// 3. Solve system of equations
// From these 2 equations:

// x = (n + m) / 2
// y = (n - m) / 2

// 4. Validity conditions

// x and y integers hone chahiye.
// → Matlab (n + m) aur (n - m) dono even hone chahiye.
// → Iska simple rule hai: (n - m) % 2 == 0.

// Saath hi x >= 0 and y >= 0 bhi zaroori hai.
// → Matlab m <= n.

// 5. Intuition without equations

// Tumhe m cubes chahiye end me.
// Agar moves ko "extra moves" socho beyond making m:
// Example: n = 5, m = 3

// 3 moves me ban jata 3 cube.

// Ab bache n - m = 2 extra moves.
// Ye 2 extra moves sirf pair me kaam aa sakte hain (Add + Remove ya Remove + Add).
// Isliye zaroori hai ki extra moves even ho.

// 🔑 Final Rule:

// m <= n hona chahiye.
// (n - m) % 2 == 0 hona chahiye.
// 👉 Tabhi possible hai.