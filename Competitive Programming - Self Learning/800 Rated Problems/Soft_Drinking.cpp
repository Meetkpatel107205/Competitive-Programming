#include <bits/stdc++.h>
using namespace std;

// Method - 1 :-

int main()
{
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_ml_of_drinks = k * l;         // total drink in ml
    int no_of_lime_slices = c * d;          // total lime slices
    int total_grams_of_salts = p;           // total salt in grams

    // calculate how many toasts possible from each resource
    int drinks_toasts = total_ml_of_drinks / nl;
    int lime_toasts = no_of_lime_slices;
    int salt_toasts = total_grams_of_salts / np;

    // smallest value decides the limiting factor
    int max_toasts = min({drinks_toasts, lime_toasts, salt_toasts});

    // per friend
    cout << max_toasts / n;

    return 0;
}
