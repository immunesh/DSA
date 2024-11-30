/*
Problem Statement:
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, 
it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.
*/


//code
#include <iostream>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    int left = 0, right = s.size() - 1;
    while (left < right) {
        if (!isalnum(s[left])) left++;
        else if (!isalnum(s[right])) right--;
        else if (tolower(s[left]) != tolower(s[right])) return false;
        else { left++; right--; }
    }
    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";
    cout << (isPalindrome(s) ? "Palindrome" : "Not Palindrome") << endl;
    return 0;
}



/*
EXPLAINATION
Pointer Initialization: Start with two pointers: one at the beginning (left) and one at the end (right).
Skipping Non-Alphanumeric Characters: Skip non-alphanumeric characters using isalnum.
Case Insensitivity: Compare characters in a case-insensitive manner using tolower.
Pointer Movement: Move the pointers inward when the characters match or skip invalid characters.
Efficiency: The approach runs in linear time (O(n)) while only using a constant amount of extra space (O(1)).
*/

