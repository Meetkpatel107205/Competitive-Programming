#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        char s[101]; // max length 100 + 1 for null char
        cin >> s;

        // Calculate string length manually
        int len = 0;
        while(s[len] != '\0') len++;

        if(len % 2 != 0) { // odd length cannot be square
            cout << "NO\n";
            continue;
        }

        int half = len / 2;
        bool isSquare = true;

        // Compare first half with second half
        for(int i = 0; i < half; i++) {
            if(s[i] != s[i + half]) {
                isSquare = false;
                break;
            }
        }

        if(isSquare)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}