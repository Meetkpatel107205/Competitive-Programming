#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int sum = 0;
    for (char c : s) {
        sum += c - '0';  // Convert char digit to int
    }

    cout << sum;
    return 0;
}

// c - '0'
// This is the trick to convert a character digit into its numeric value.

// Characters in C++ are stored using ASCII values.

// '0' = ASCII value 48

// '1' = 49

// '2' = 50

// ...

// '9' = 57

// So:

// '5' - '0'  ==  53 - 48  ==  5
// '2' - '0'  ==  50 - 48  ==  2
