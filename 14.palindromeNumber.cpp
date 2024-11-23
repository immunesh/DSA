//Palindrome Number
/*
Negative Check: Negative numbers and numbers ending with 0 (except 0 itself) cannot be palindromes.
Reversing Half: Reverse only half of the number to avoid overflow and reduce computations.
Stopping Condition: Stop reversing when reversed is greater than or equal to the remaining half (x).
Comparison: Check if the original half (x) matches the reversed half or reversed / 10 (for odd-length numbers).
Efficiency: This avoids reversing the entire number, making it optimal in both time and space.
*/

//code
#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;
    int reversed = 0;
    while (x > reversed) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    return x == reversed || x == reversed / 10;
}

int main() {
    int n = 121;
    cout << (isPalindrome(n) ? "Palindrome" : "Not Palindrome") << endl;
    return 0;
}
