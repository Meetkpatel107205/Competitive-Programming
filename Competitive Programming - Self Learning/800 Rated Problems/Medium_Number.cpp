#include<bits/stdc++.h>
using namespace std;

// Method - 1 :-

int findMin(int x, int y, int z)
{
    int minN = x;

    if(y < minN)
    {
        minN = y;
    }

    if(z < minN)
    {
        minN = z;
    }

    return minN;
}

int findMax(int x, int y, int z)
{
    int maxN = x;

    if(y > maxN)
    {
        maxN = y;
    }

    if(z > maxN)
    {
        maxN = z;
    }

    return maxN;
}

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int a,b,c;

        cin >> a >> b >> c;

        int minNum = findMin(a, b, c);
        int maxNum = findMax(a, b, c);

        if(a != minNum && a != maxNum)
        {
            cout << a << endl;
        }
        else if(b != minNum && b != maxNum)
        {
            cout << b << endl;
        }
        else
        {
            cout << c << endl;
        }
    }

    return 0;
}

// Method - 2 :-

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int a, b, c;
//         cin >> a >> b >> c;
//         int middle = a + b + c - min({a,b,c}) - max({a,b,c});
//         cout << middle << endl;
//     }

//     return 0;
// }

// Method - 3 :-

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int a, b, c;
//         cin >> a >> b >> c;

//         int middle;
//         if ((a >= b && a <= c) || (a >= c && a <= b))
//             middle = a;
//         else if ((b >= a && b <= c) || (b >= c && b <= a))
//             middle = b;
//         else
//             middle = c;

//         cout << middle << endl;
//     }

//     return 0;
// }
