#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s); // read the whole line including spaces

    bool seen[26] = {false};
    int count = 0;

    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            int idx = c - 'a';
            if (!seen[idx]) {
                seen[idx] = true;
                count++;
            }
        }
    }

    cout << count;
    return 0;
}
