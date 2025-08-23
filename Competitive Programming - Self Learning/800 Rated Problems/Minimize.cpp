// #include<bits/stdc++.h>
// using namespace std;

// // Method - 1 :-

// int main()
// {
//     int t;

//     cin >> t;

//     while(t--)
//     {
//         int a,b;

//         cin >> a >> b;
    
//         int minimize = INT_MAX;
    
//         for(int i = a; i <= b; i++)
//         {
//             int calc = ((i - a) + (b - i));
    
//             if(calc < minimize)
//             {
//                 minimize = calc;
//             }
//         }
    
//         cout << minimize << "\n";
//     }

//     return 0;
// }

// Method - 2 :-

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int a,b;

        cin >> a >> b;

        // => (c - a) + (b - c)
        // => c - a + b - c
        // => -a + b + c - c
        // => b - a (So, the ans is doesn't depends on value of c its always (b - a)).

        cout << (b - a) << endl;
    }

    return 0;
}