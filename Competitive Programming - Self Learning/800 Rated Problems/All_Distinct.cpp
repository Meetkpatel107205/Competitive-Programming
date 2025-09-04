#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[55];  // n ≤ 50
        for (int i = 0; i < n; i++) cin >> arr[i];

        // sort array
        sort(arr, arr + n);

        // count distinct elements
        int d = 1;  // at least one element exists
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i - 1]) d++;
        }

        // check duplicates
        if ((n - d) % 2 == 0) 
            cout << d << "\n";
        else 
            cout << d - 1 << "\n";
    }
    return 0;
}