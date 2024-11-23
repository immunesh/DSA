// Check Prime 
/*
Initial Checks: Handle small values (less than 4) directly; if n is less than or equal to 1, return false.
Divisibility by 2 or 3: Immediately rule out numbers divisible by 2 or 3.
Optimized Loop: Check divisibility from 5 up to the square root of n, incrementing by 6 to skip even numbers and multiples of 3.
Efficiency: This method reduces the number of checks by only testing potential factors of the form 6k ± 1.
Prime Status: Return true if n is prime, otherwise false.
*/

//code
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int n = 29;
    cout << (isPrime(n) ? "Prime" : "Not Prime") << endl;
    return 0;
}
