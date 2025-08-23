// #include<bits/stdc++.h>
// using namespace std;

// // Method - 1 :-

// int main()
// {
//     int t;

//     cin >> t;

//     while(t--)
//     {
//         string a,b;

//         cin >> a >> b;

//         for(int i = 0; i < a.size(); i++)
//         {
//             if(i == 0)
//             {
//                 cout << b[i];
//             }
//             else
//             {
//                 cout << a[i];
//             }
//         }

//         cout << " ";

//         for(int i = 0; i < b.size(); i++)
//         {
//             if(i == 0)
//             {
//                 cout << a[i];
//             }
//             else
//             {
//                 cout << b[i];
//             }
//         }

//         cout << "\n";
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
        string a,b;

        cin >> a >> b;

        cout << b[0] << a.substr(1, a.size());
        cout << " ";
        cout << a[0] << b.substr(1, a.size());
        cout << "\n";
    }

    return 0;
}