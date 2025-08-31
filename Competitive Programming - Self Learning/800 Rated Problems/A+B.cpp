#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char a, plus, b;
        cin >> a >> plus >> b;  // read like '4' '+' '2'
        int x = a - '0';
        int y = b - '0';
        cout << (x + y) << "\n";
    }
    return 0;
}