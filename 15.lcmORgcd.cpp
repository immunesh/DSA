//LCM or GCD
/*
GCD Calculation: The gcd function implements the Euclidean algorithm,
which repeatedly replaces the larger number by its remainder when divided by the smaller number until the remainder is zero. 
The last non-zero remainder is the GCD.

The LCM is then calculated using the formula LCM = (a / GCD) * b.
The function returns a vector containing the LCM as the first element and the GCD as the second element.
The main function demonstrates the usage of the lcmAndGcd function, printing the results for sample input values.
*/

//code

#include <iostream>
#include <vector>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

vector<long long> lcmAndGcd(long long a, long long b) {
    long long gcdValue = gcd(a, b);
    long long lcmValue = (a / gcdValue) * b;
    return {lcmValue, gcdValue};
}

int main() {
    long long a = 15, b = 20;
    vector<long long> result = lcmAndGcd(a, b);
    cout << "LCM: " << result[0] << ", GCD: " << result[1] << endl;
    return 0;
}
