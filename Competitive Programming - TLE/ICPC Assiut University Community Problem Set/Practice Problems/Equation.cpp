// #include<bits/stdc++.h>
// #include<cmath>
// using namespace std;

// int calcEquation(int x, int n)
// {
//     int result = 0;

//     for (int i = 0; i <= n; i += 2)
//     {
//         if (i == 0)
//         {
//             result += 0; // (x^0 - 1) = 0 always
//         }
//         else
//         {
//             result += round(pow(x, i));
//         }
//     }

//     return result;
// }

// int main()
// {
//     int n1,n2;

//     cin >> n1 >> n2;

//     cout << calcEquation(n1, n2);

//     return 0;
// }

#include <iostream>
using namespace std;

// Custom function to calculate x^i without using pow()
long long power(long long base, long long exp) {
    long long result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Function to calculate the required expression
long long calcEquation(long long x, long long n) {
    long long sum = 0;

    for (int i = 0; i <= n; i += 2) {
        if (i == 0) {
            sum += (power(x, 0) - 1); // (x^0 - 1) = (1 - 1) = 0
        } else {
            sum += power(x, i);      // x^2 + x^4 + ...
        }
    }

    return sum;
}

int main() {
    long long x, n;
    cin >> x >> n;

    cout << calcEquation(x, n) << endl;

    return 0;
}
