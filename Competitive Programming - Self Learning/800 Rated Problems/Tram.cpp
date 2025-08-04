#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int a_sum = 0;
    int b_sum = 0;

    int min_possible_capacity = 0;

    int temp_sum = 0;

    while(n--)
    {
        int a,b;

        cin >> a >> b;

        a_sum += a;
        b_sum += b;

        temp_sum -= a;
        temp_sum += b;

        if(temp_sum > min_possible_capacity)
        {
            min_possible_capacity = temp_sum;
        }
    }

    if(b_sum - a_sum == 0)
    {
        cout << min_possible_capacity;
    }

    return 0;
}

// What is the maximum number of passengers ever inside the tram at the same time?
// That number is the minimum capacity your tram needs — to make sure it's never overloaded.

// Minimum capacity = max number of passengers inside tram at any stop.
// It guarantees that the tram will never overflow during its route.

