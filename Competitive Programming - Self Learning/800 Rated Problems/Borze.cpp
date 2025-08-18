#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    for (int i = 0; i < n; ) {
        if (s[i] == '.') {
            cout << 0;
            i++; // move one step
        } else { // means '-'
            if (s[i+1] == '.') {
                cout << 1;
            } else {
                cout << 2;
            }
            i += 2; // move two steps because "-." or "--"
        }
    }
    cout << endl;
    return 0;
}
