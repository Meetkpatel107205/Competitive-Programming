#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    for (int n = 1; n <= 10; n++) { 
        int total = k * n;
        if (total % 10 == 0 || total % 10 == r) {
            cout << n << "\n";
            return 0;
        }
    }
    return 0;
}
