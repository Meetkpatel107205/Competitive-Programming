#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    if(n == 1)
    {
        cout << "I hate it";
    }
    else
    {
        for(int i = 0; i < n - 1; i++)
        {
            cout << ((i % 2 == 0) ? "I hate that " : "I love that ");
        }

        cout << ((n % 2 == 0) ? "I love it" : "I hate it");
    }

    return 0;
}

// Method - 2 :-

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     string result = "";

//     for(int i = 1; i <= n; i++) {
//         result += (i % 2 == 1) ? "I hate" : "I love";
//         if(i == n)
//             result += " it";
//         else
//             result += " that ";
//     }

//     cout << result;

//     return 0;
// }

// Method - 3 :-

// #include <iostream>
// using namespace std;

// void hulk(int n) {
//     if (n == 0) return;
//     if (n % 2 == 1)
//         cout << "I hate";
//     else
//         cout << "I love";

//     if (n == 1)
//         cout << " it";
//     else {
//         cout << " that ";
//         hulk(n - 1);
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     hulk(n);
//     return 0;
// }

// Method - 4 :-

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<string> words;

//     for(int i = 0; i < n; i++) {
//         if(i % 2 == 0) 
//             words.push_back("I hate");
//         else 
//             words.push_back("I love");

//         if(i != n - 1)
//             words.push_back("that");
//     }

//     words.push_back("it");

//     for(int i = 0; i < words.size(); ++i) {
//         cout << words[i];
//         if(i != words.size() - 1)
//             cout << " ";
//     }

//     return 0;
// }


