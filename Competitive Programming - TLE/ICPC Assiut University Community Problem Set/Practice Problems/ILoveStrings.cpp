#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        string temp1, temp2;
        cin >> temp1 >> temp2;

        int idx1 = 0, idx2 = 0;
        int len1 = temp1.size();
        int len2 = temp2.size();
        int total_len = len1 + len2;

        for(int j = 0; j < total_len; j++)
        {
            if(j % 2 == 0 && idx1 < len1)
            {
                cout << temp1[idx1++];
            }
            else if(j % 2 != 0 && idx2 < len2)
            {
                cout << temp2[idx2++];
            }
            else if (idx1 < len1) // temp2 finished early
            {
                cout << temp1[idx1++];
            }
            else if (idx2 < len2) // temp1 finished early
            {
                cout << temp2[idx2++];
            }
        }

        cout << endl; // To separate outputs for different test cases
    }

    return 0;
}
