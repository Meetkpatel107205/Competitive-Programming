#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int officers = 0;   // 👮 available police officers
    int untreated = 0;  // 🚫 crimes that went untreated

    for (int i = 0; i < n; i++) {
        int event;
        cin >> event;

        if (event > 0) {
            officers += event; // Recruit officers
        } 
        else { // Crime occurs
            if (officers > 0) {
                officers--; // Assign officer to crime
            } 
            else {
                untreated++; // No officers → untreated crime
            }
        }
    }

    cout << untreated; // Output total untreated crimes
    return 0;
}
