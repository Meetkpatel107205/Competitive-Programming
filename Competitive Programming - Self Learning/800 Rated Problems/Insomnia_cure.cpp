#include <iostream>
using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    if (k == 1 || l == 1 || m == 1 || n == 1) {
        cout << d; // every dragon gets hurt if any divisor is 1
        return 0;
    }

    bool damaged[100001] = {false}; // d ≤ 10^5

    for (int i = k; i <= d; i += k) damaged[i] = true;
    for (int i = l; i <= d; i += l) damaged[i] = true;
    for (int i = m; i <= d; i += m) damaged[i] = true;
    for (int i = n; i <= d; i += n) damaged[i] = true;

    int count = 0;
    for (int i = 1; i <= d; i++) {
        if (damaged[i]) count++;
    }

    cout << count;
    return 0;
}
