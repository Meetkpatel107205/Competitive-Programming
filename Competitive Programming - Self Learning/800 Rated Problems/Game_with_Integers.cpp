#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 3 == 0) 
            cout << "Second" << endl; // Vova wins
        else
            cout << "First" << endl;  // Vanya wins
    }
    return 0;
}