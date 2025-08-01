#include <iostream>
using namespace std;

void manualReverse(int arr[], int start, int end) {
    while (start < end) {
        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    cin >> n;

    int a[100]; // Since n <= 100

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            manualReverse(a, 0, i - 1);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}
