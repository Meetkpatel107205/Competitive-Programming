#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 1;   // at least 1 occurrence of first char
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
            if (count >= 7)
            {
                cout << "YES";
                return 0;   // no need to continue
            }
        }
        else
        {
            count = 1;  // reset
        }
    }

    cout << "NO";
    return 0;
}