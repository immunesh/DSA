//Problem Statement 
//Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.
/*
The issue persists because the global variable s retains its value across recursive calls, 
even when n == 0 is reached. Resetting s in the base case doesn't help here because the recursion depth will already have computed intermediate sums incorrectly.

Here's the revised code that avoids the issue entirely while keeping the structure of your original code intact:
*/

#include<bits/stdc++.h>
using namespace std;

// User function template for C++
class Solution {
  public:
    int s = 0; // Global variable to store the sum
    
    long long sumOfSeries(long long n) {
        if (n == 0) return 0; // Base case: return 0 when n is 0
        
        long long sum = sumOfSeries(n - 1); // Recursive call
        sum += n * n * n; // Compute the sum of cubes up to n
        return sum; // Return the computed sum
    }
};
