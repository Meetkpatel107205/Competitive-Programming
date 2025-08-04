#include<bits/stdc++.h>
using namespace std;

long long* insertionSort(long long arr[], long long s)
{
    long long* copy_a = new long long[s];

    for(int i = 0; i < s; i++)
    {
        copy_a[i] = arr[i];
    }

    for(int i = 0; i < s; i++)
    {
        long long key = copy_a[i];
        int j = i - 1;

        while(j >= 0 && copy_a[j] > key)
        {
            copy_a[j + 1] = copy_a[j];
            j = j - 1;
        }
        copy_a[j + 1] = key;
    }

    return copy_a;
}

bool arraysAreEqual(long long* a, long long* b, long long s)
{
    for(long long i = 0; i < s; i++)
    {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        long long n,k;

        cin >> n >> k;

        long long a[n];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

    long long* copy_a = insertionSort(a, n);

    if(arraysAreEqual(a, copy_a, n) || k > 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    }

    return 0;
}