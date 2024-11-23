// Check Armstrong

/*
Digit Count: Calculate the number of digits in the number using log10(n) + 1.
Sum Calculation: For each digit, raise it to the power of the total number of digits and add it to the sum.
Comparison: Compare the sum with the original number to determine if it's an Armstrong number.
*/

//code
#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int original = n, sum = 0, digits = log10(n) + 1;
    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }
    return sum == original;
}

int main() {
    int n = 153;
    cout << (isArmstrong(n) ? "Yes" : "No") << endl;
    return 0;
}
