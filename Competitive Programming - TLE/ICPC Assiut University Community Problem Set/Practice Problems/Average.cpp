#include<bits/stdc++.h>
using namespace std;

double average(double arr[], int s)
{
    double sum = 0;

    for(int i = 0; i < s; i++)
    {
        sum += arr[i];
    }

    double avg = sum/s;

    return avg;
}

int main()
{
    int n;

    cin >> n;

    double a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << fixed << setprecision(7) << average(a, n);

    return 0;
}