#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false; // 0 and 1 are not prime numbers
    if (num == 2 || num == 3) return true; // 2 and 3 are prime numbers
    if (num % 2 == 0 || num % 3 == 0) return false; // Exclude multiples of 2 and 3

    for (int i = 5; i <= sqrt(num); i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int limit;
    cout << "Enter the upper limit to find prime numbers: ";
    cin >> limit;

    cout << "Prime numbers up to " << limit << " are: ";
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
