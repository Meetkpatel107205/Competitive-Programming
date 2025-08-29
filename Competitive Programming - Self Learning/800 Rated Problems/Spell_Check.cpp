#include<bits/stdc++.h>
using namespace std;

// Method - 1 :-

void sortString(string &s) // pass by reference
{
    int s_len = s.size();

    for(int i = 0; i < s_len; i++)
    {
        for(int j = 0; j < s_len - 1; j++) // avoid out-of-bounds
        {
            if(s[j + 1] < s[j])
            {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int t;

    cin >> t;

    string name = "Timur";

    sortString(name);

    while(t--)
    {
        int n;

        cin >> n;

        string str;

        cin >> str;

        sortString(str);

        if(str == name)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}

// Method - 2 :-

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    string correct = "Timur";
    sort(correct.begin(), correct.end()); // built-in sort is easier

    while(t--) {
        string s; cin >> s;
        if(s.size() != 5) { cout << "NO\n"; continue; }
        sort(s.begin(), s.end());
        if(s == correct) cout << "YES\n";
        else cout << "NO\n";
    }
}

// Method - 3 :-

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    string correct = "Timur";

    while(t--) {
        string s; cin >> s;
        if(s.size() != 5) { cout << "NO\n"; continue; }

        unordered_map<char,int> m1, m2;
        for(char c : correct) m1[c]++;
        for(char c : s) m2[c]++;

        if(m1 == m2) cout << "YES\n";
        else cout << "NO\n";
    }
}

// Method - 4 :-

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    string correct = "Timur";
    multiset<char> ms_correct(correct.begin(), correct.end());

    while(t--) {
        string s; cin >> s;
        if(s.size() != 5) { cout << "NO\n"; continue; }

        multiset<char> ms_input(s.begin(), s.end());
        if(ms_input == ms_correct) cout << "YES\n";
        else cout << "NO\n";
    }
}

// Method - 5 :-

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        if(s.size() != 5) { cout << "NO\n"; continue; }

        string correct = "Timur";
        sort(s.begin(), s.end());
        sort(correct.begin(), correct.end());
        cout << (s == correct ? "YES\n" : "NO\n");
    }
}

// Method - 6 :-

#include<bits/stdc++.h>
using namespace std;

int getMask(string s) {
    int mask = 0;
    for(char c : s) {
        if(c == 'T') mask |= 1<<0;
        else if(c == 'i') mask |= 1<<1;
        else if(c == 'm') mask |= 1<<2;
        else if(c == 'u') mask |= 1<<3;
        else if(c == 'r') mask |= 1<<4;
    }
    return mask;
}

int main() {
    int t; cin >> t;
    int correctMask = getMask("Timur");

    while(t--) {
        string s; cin >> s;
        if(s.size() != 5) { cout << "NO\n"; continue; }

        cout << (getMask(s) == correctMask ? "YES\n" : "NO\n");
    }
}