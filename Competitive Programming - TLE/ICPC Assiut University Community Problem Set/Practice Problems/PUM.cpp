// 🔍 What to Do:
// You are given a number N, and you must print N lines.

// Each line should have:

// 3 numbers

// followed by the word PUM

// But there's a pattern:

// You are skipping every 4th number (and replacing it with PUM).

// The numbers increase by 4 each line.

// 🔢 Example:
// If N = 3, the output should be:

// Copy
// Edit
// 1 2 3 PUM
// 5 6 7 PUM
// 9 10 11 PUM
// Explanation:

// First line: 1 2 3 → then comes 4, but instead we print PUM

// Second line: 5 6 7 → skip 8, print PUM

// Third line: 9 10 11 → skip 12, print PUM

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int pumCount = 1;

    for(int i = 0; i < n; i++)
    {
        while(pumCount % 4 != 0)
        {
            cout << pumCount << " ";
            pumCount++;
        }
        cout << "PUM" << endl;
        pumCount++;
    }

    return 0;
}