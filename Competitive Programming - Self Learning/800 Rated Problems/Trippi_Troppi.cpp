#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(); // clear the newline after reading t

    while (t--) {
        string line;
        getline(cin, line);    // read the entire line (3 words)

        stringstream ss(line);
        string word;
        string modern = "";

        while (ss >> word) {
            modern += word[0]; // take first character
        }

        cout << modern << "\n";
    }

    return 0;
}