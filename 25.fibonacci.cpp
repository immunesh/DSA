#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) return n;
    int prev2 = 0, prev1 = 1;
    for (int i = 2; i <= n; ++i) {
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int main() {
    int n = 10;
    cout << fib(n) << endl;
    return 0;
}


/*
Explanation:
Base Cases: Handle base cases where n is 0 or 1.
Iterative Approach: Use two variables (prev1 and prev2) to store the previous two Fibonacci numbers.
Loop to Calculate Fibonacci: Iteratively calculate the Fibonacci number from 2 to n.
Space Optimization: Instead of using an array, only two variables are maintained to track the previous two numbers.
Time Complexity: The solution runs in O(n) time with O(1) space.
*/