#include <bits/stdc++.h>
using namespace std;

// Method - 1 :-

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int median;

    // Check conditions to find median
    if ((x1 >= x2 && x1 <= x3) || (x1 <= x2 && x1 >= x3))
        median = x1;
    else if ((x2 >= x1 && x2 <= x3) || (x2 <= x1 && x2 >= x3))
        median = x2;
    else
        median = x3;

    int min_dist = abs(x1 - median) + abs(x2 - median) + abs(x3 - median);

    cout << min_dist;

    return 0;
}

// Method - 2 :-

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int x1, x2, x3;
//     cin >> x1 >> x2 >> x3;

//     // Put the points into a vector and sort them
//     vector<int> points = {x1, x2, x3};
//     sort(points.begin(), points.end());

//     // The meeting point is the median (middle element)
//     int meeting_point = points[1];

//     // Calculate the sum of distances to median
//     int min_dist = abs(x1 - meeting_point) + abs(x2 - meeting_point) + abs(x3 - meeting_point);

//     cout << min_dist;

//     return 0;
// }

