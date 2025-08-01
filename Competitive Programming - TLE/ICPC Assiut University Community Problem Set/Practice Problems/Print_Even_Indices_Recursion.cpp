#include <iostream>
using namespace std;

void Print_Even_Indices_Reverse(int arr[], int idx)
{
    if (idx < 0) return;

    cout << arr[idx] << " ";
    Print_Even_Indices_Reverse(arr, idx - 2);
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int start = (n - 1) % 2 == 0 ? n - 1 : n - 2; // Start from last even index
    Print_Even_Indices_Reverse(a, start);

    return 0;
}
