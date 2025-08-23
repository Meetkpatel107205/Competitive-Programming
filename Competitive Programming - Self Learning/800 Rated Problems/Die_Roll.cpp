#include<bits/stdc++.h>
using namespace std;

// Method - 1 :-

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int Y,W;
    
    cin >> Y >> W;

    int dotWinningCount = 0;
    int totalDiceResults = 6;

    for(int i = max(Y, W); i <= totalDiceResults; i++)
    {
        dotWinningCount++;
    }

    // directly work with integers
    int numer = dotWinningCount;
    int denom = totalDiceResults;

    int g = gcd(numer, denom);
    numer /= g;
    denom /= g;

    cout << numer << "/" << denom << endl;
    
    return 0;
}

// // Method - 2 :-

// #include <bits/stdc++.h>
// using namespace std;

// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// int main() {

//     int Y,W;

//     cin >> Y >> W;

//     int dotWinningCount = 0;

//     int totalDiceResults = 6;

//     for(int i = max(Y, W); i <= totalDiceResults; i++)
//     {
//         dotWinningCount++;
//     }

//     double x = (double)dotWinningCount/totalDiceResults; // fraction in decimal
//     int denom = 10000; // precision up to 4 digits
//     int numer = round(x * denom);

//     int g = gcd(numer, denom);
//     numer /= g;
//     denom /= g;

//     cout << numer << "/" << denom << endl;
// }
