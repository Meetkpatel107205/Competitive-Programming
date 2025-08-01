#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;

    long long count = 0;

    // Step 1: Use (1 eye + 1 mouth + 1 body)
    long long firstCombo = min({n, m, k});
    count += firstCombo;
    n -= firstCombo;
    m -= firstCombo;
    k -= firstCombo;

    // Step 2: Use (2 eyes + 1 mouth + 1 body)
    long long secondCombo = min({n / 2, m, k});
    count += secondCombo;
    n -= 2 * secondCombo;
    m -= secondCombo;
    k -= secondCombo;

    // Step 3: Use (2 eyes + 1 body)
    long long thirdCombo = min(n / 2, k);
    count += thirdCombo;
    n -= 2 * thirdCombo;
    k -= thirdCombo;

    cout << count << endl;
    return 0;
}
