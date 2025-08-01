#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases

    while (t--) {
        int n;
        cin >> n;

        int arr[101] = {0};  // ✅ RESET per test case

        // Input and frequency count
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            arr[x]++;
        }

        // First MEX
        int mex1 = 0;
        while (arr[mex1] > 0) {
            arr[mex1]--;
            mex1++;
        }

        // Second MEX
        int mex2 = 0;
        while (arr[mex2] > 0) {
            arr[mex2]--;
            mex2++;
        }

        cout << (mex1 + mex2) << endl;
    }

    return 0;
}
