#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if(n < 2) return false;
    for(long long i = 2; i*i <= n; i++)
        if(n % i == 0) return false;
    return true;
}

int main() {
    int n;

    cin >> n;
    
    int count = 0;
    long long num = 2;

    while(true) {
        if(isPrime(num)) {
            count++;
            if(count == n) {
                cout << "The 10001st prime is: " << num << endl;
                break;
            }
        }
        num++;
    }

    return 0;
}