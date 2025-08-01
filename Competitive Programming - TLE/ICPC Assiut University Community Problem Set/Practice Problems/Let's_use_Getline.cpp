#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin, s, '\\');  // read until backslash (but not include it)
    //                ^
    //                |
    //                |
    //       delimiter character
    cout << s;
    return 0;
}
