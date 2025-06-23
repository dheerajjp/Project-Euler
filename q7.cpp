#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int TARGET = 10001;
    int primes[TARGET];
    primes[0] = 2;
    int count = 1;
    int candidate = 3;

    while (count < TARGET) {
        bool isPrime = true;
        int limit = static_cast<int>(sqrt(candidate));
        for (int i = 0; i < count && primes[i] <= limit; ++i) {
            if (candidate % primes[i] == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            primes[count++] = candidate;
        }
        candidate += 2; 
    }

    cout << primes[TARGET - 1] << "\n"; 
    return 0;
}