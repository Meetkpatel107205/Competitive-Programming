#include<bits/stdc++.h>
#include <algorithm> // for reverse
#include<string>
using namespace std;

int main()
{

    long long n;

    cin >> n;

    string num_string = to_string(n);

    int left = 0;
    int right = num_string.length() - 1;

    bool isPalindrome = true;

    for(int i = 0; i < num_string.length() / 2; i++)
    {
        if(num_string[left] != num_string[right])
        {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    string num_rev = num_string;
    string result = "";
    
    // Reverse the copy in-place
    reverse(num_rev.begin(), num_rev.end());

    for(int j = 0; j < num_rev.length(); j++)
    {
        if(num_rev[j] == '0' && result.empty())
        {
            continue; // skip leading zeroes
        }
        else
        {
            result += num_rev[j]; // fix: use += instead of assigning to uninitialized index
        }
    }

    if(isPalindrome)
    {
        cout << result << endl << "YES";
    }
    else
    {
        cout << result << endl << "NO";
    }

    return 0;
}
