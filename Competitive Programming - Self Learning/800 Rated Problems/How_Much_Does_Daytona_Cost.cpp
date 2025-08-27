#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int s, int t)
{
    int low = 0;
    int high = s - 1;

    while(low <= high)
    {
        int mid = low + ((high - low)/2);

        if(arr[mid] == t)
        {
            return mid;
        }

        if(arr[mid] > t)
        {
            high = mid - 1;
        }

        if(arr[mid] < t)
        {
            low = mid + 1;
        }
    }

    return -1;
}

// Method - 1 :-

int linearSearch(int arr[], int s, int t)
{
    for(int i = 0; i < s; i++)
    {
        if(arr[i] == t)
        {
            return i;
        }       
    }

    return -1;
}

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n,k;

        cin >> n >> k;

        int a[n];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int result = linearSearch(a, n, k);

        if(result == -1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}

// Method - 2 :-

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        bool found = false;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == k) found = true;
        }
        cout << (found ? "YES\n" : "NO\n");
    }
}