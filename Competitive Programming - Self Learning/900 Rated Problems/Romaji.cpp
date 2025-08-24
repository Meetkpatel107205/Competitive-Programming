#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    return c == 'a' || c == 'o' || c == 'u' || c == 'i' || c == 'e';
}

int main()
{
    string s;
    
    cin >> s;

    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        char c = s[i];

        if (!isVowel(c) && c != 'n') // consonant except 'n'
        { 
            if (i == n - 1 || !isVowel(s[i + 1])) // last char OR next is not vowel
            { 
                cout << "NO\n";
                
                return 0;
            }
        }
    }

    cout << "YES\n";
    return 0;
}