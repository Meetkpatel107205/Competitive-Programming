#include<bits/stdc++.h>
using namespace std;

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n,t;

    cin >> n >> t;

    string Queue;

    cin >> Queue;

    for(int i = 0; i < t; i++)
    {
        for (int i = 0; i < n - 1; i++) 
        {
            if (Queue[i] == 'B' && Queue[i + 1] == 'G')
            {
                swap(Queue[i], Queue[i + 1]);
                i++;  // Skip the next position since it was part of the swap
            }
        }
    }

    cout << Queue;

    return 0;
}