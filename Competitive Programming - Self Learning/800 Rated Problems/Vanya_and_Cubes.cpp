#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int level = 0;      // count of levels built
    int used = 0;       // total cubes used
    int i = 1;          // current level index

    while (true) {
        int need = i * (i + 1) / 2; // cubes needed for this level

        if (used + need > n)
        {
            break; // can't build this level
        }
        
        used += need;
        level++;
        i++;
    }

    cout << level << "\n";
    return 0;
}