#include<bits/stdc++.h>
using namespace std;

// Method - 1 :-

double sumOfAllPercentages(double arr[], int s)
{
    double sum = 0;

    for(int i = 0; i < s; i++)
    {
        sum += (arr[i]/100);
    }

    return sum;
}

int main()
{
    int n;

    cin >> n;

    double cocktail[n];

    for(int i = 0; i < n; i++)
    {
        cin >> cocktail[i];
    }

    double result = sumOfAllPercentages(cocktail, n);

    cout << ((result/n)*100);

    return 0;
}

// Method - 2 :-

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
    
//     cin >> n;
    
//     double cocktail[n];
    
//     double sum = 0;
    
//     for(int i = 0; i < n; i++)
//     {
//         cin >> cocktail[i];
//         sum += cocktail[i];
//     }
    
//     cout << (sum/n);
    
//     return 0;
// }