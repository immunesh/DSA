// Sum of All Divisors
/*
Divisor Contribution: The number i contributes i to the sum for each multiple of i up to n.
Sum Calculation: For each divisor i, add (n / i) * i to the total sum, where (n / i) is the count of multiples of i within n.
Efficiency: The loop runs in O(n) time, efficiently calculating the required sum.
Space Complexity: The space complexity is O(1), as no extra storage is needed beyond the loop variables.
Final Output: The function returns the accumulated sum of divisors for all numbers from 1 to n.
*/

//code

#include <iostream>
using namespace std;

long long sumOfDivisors(int n) {
    long long totalSum = 0;
    for (int i = 1; i <= n; i++) {
        totalSum += (n / i) * i;
    }
    return totalSum;
}

int main() {
    int n = 5;
    cout << sumOfDivisors(n) << endl;
    return 0;
}
