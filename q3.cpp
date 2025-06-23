#include <iostream>
using namespace std;

int main() {
    long long n = 600851475143LL;
    long long maxPrime = -1;

    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }

    for (long long f = 3; f * f <= n; f += 2) {
        while (n % f == 0) {
            maxPrime = f;
            n /= f;
        }
    }

    if (n > 2) {
        maxPrime = n;
    }

    cout << "Largest prime factor: " << maxPrime << "\n";
    return 0;
}