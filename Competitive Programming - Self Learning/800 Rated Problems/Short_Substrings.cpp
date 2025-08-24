// #include<bits/stdc++.h>
// using namespace std;

// // Method - 1 :-

// int main()
// {
//     int t;

//     cin >> t;

//     while(t--)
//     {
//         string str;

//         cin >> str;

//         for(int i = 0; i <= str.size() - 2; i = i + 2)
//         {
//             if(i == str.size() - 2)
//             {
//                 cout << str[str.size() - 2] << str[str.size() - 1];
//             }
//             else
//             {
//                 cout << str[i];
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Method - 2 :-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        string b;

        cin >> b;

        string a = "";

        a += b[0];

        for(int i = 1; i < b.size(); i += 2)
        {
            a += b[i];
        }

        cout << a << "\n";
    }

    return 0;
}

// // Method - 3 :-

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;

//     cin >> t;

//     while(t--)
//     {
//         string b;

//         cin >> b;

//         string a = b.substr(0, 2);  // start with first two chars

//         for(int i = 2; i < b.size(); i += 2)
//         {
//             a += b[i];
//         }

//         cout << a << "\n";
//     }

//     return 0;
// }

