#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    string S;
    cin >> S;

    bool isFollowingRules = true;

    // Check length of the string
    if (S.length() != A + B + 1)
    {
        isFollowingRules = false;
    }

    // Check that the (A+1)th character is '-'
    else if (S[A] != '-')
    {
        isFollowingRules = false;
    }

    // Check that all other characters are digits
    else
    {
        for (int i = 0; i < S.length(); i++)
        {
            if (i == A) continue; // skip the dash
            if (!isdigit(S[i]))
            {
                isFollowingRules = false;
                break;
            }
        }
    }

    // Output result
    if (isFollowingRules)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}
