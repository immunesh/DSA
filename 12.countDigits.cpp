//countDigits
//https://www.geeksforgeeks.org/problems/count-digits5716/1

/*
The function first stores the original value of n and initializes a count variable.
It uses a loop to extract each digit from the end using n % 10.
The digit is checked to ensure it is not zero and divides the original n evenly.
If the conditions are met, count is incremented.
The loop continues until all digits are processed, and count is returned.
*/

//Code

#include <iostream>
using namespace std;

int countDividingDigits(int n) {
    int original = n, count = 0;
    while (n != 0) {
        int digit = n % 10;
        if (digit != 0 && original % digit == 0) {
            count++;
        }
        n /= 10;
    }
    return count;
}
