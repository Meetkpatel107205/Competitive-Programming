#include <bits/stdc++.h>
using namespace std;

long long findMin(long long a[], int s, int e) {
    long long m = a[s];
    for (int i = s + 1; i <= e; i++) {
        if (a[i] < m) {
            m = a[i];
        }
    }
    return m;
}

int main() {
    long long a, b;
    cin >> a >> b;

    long long arr[a];
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    for (int j = 0; j < a; j += b) {
        long long right = min(j + b - 1, a - 1);  // avoid out-of-bounds
        long long minRes = findMin(arr, j, right);
        cout << minRes << " ";
    }

    return 0;
}
