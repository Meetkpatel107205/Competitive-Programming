#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int* a = new int[n]; // dynamic array
        int maxVal = 0;

        // read input and find max
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > maxVal)
                maxVal = a[i];
        }

        int* freq = new int[maxVal + 1](); // dynamic frequency array, initialized to 0

        // calculate frequency
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
        }

        bool isSatisfactory = false;

        // check all distinct numbers
        for (int i = 0; i <= maxVal; i++) {
            if (freq[i] > 0 && (freq[i] >= 2)) {
                isSatisfactory = true;
                break;
            }
        }

        if (isSatisfactory)
            cout << "YES\n";
        else
            cout << "NO\n";

        delete[] a;    // free memory
        delete[] freq; // free memory
    }

    return 0;
}