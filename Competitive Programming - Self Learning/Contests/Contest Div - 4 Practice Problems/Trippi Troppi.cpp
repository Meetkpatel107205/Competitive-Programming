#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void printFirstLetters(const string &str) {
    stringstream ss(str);
    string word;
    while (ss >> word) {
        cout << word[0];
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore newline after reading n

    vector<string> lines(n);
    for (int i = 0; i < n; i++) {
        getline(cin, lines[i]);
        printFirstLetters(lines[i]);
    }

    return 0;
}
