#include<bits/stdc++.h>
using namespace std;

void NewArray(int arr1[], int arr2[], int s)
{
    int c[2*s];

    int idx = 0;
    int idx2 = 0;

    for(int i = 0; i < (2*s); i++)
    {
        if(i < s)
        {
            c[i] = arr2[idx++];
        }
        else
        {
            c[i] = arr1[idx2++];
        }
    }

    for(int i = 0; i < (2*s); i++)
    {
        cout << c[i] << " ";
    }
}

int main()
{
    int t;

    cin >> t;

    int a[t];
    int b[t];

    for(int i = 0; i < t; i++)
    {
        cin >> a[i];
    }

    for(int j = 0; j < t; j++)
    {
        cin >> b[j];
    }

    NewArray(a, b, t);

    return 0;
}