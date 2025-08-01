#include <bits/stdc++.h>
using namespace std;
 
int countDivisions(long long x) {
    int count = 0;
    while (x % 2 == 0) {
        x /= 2;
        count++;
    }
    return count;
}
 
int main() {
    int n;
    cin >> n;
    
    long long num;
    int maxCount = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> num;
        int cnt = countDivisions(num);
        if (cnt > maxCount)
            maxCount = cnt;
    }
 
    cout << maxCount << endl;
    return 0;
}