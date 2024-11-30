/*
You are given an array of integers arr[]. Your task is to reverse the given array.

Examples:

Input: arr = [1, 4, 3, 2, 6, 5]
Output: [5, 6, 2, 3, 4, 1]
Explanation: The elements of the array are 1 4 3 2 6 5. 
After reversing the array, the first element goes to the last position, 
the second element goes to the second last position and so on. Hence, the answer is 5 6 2 3 4 1.
*/

//code 
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // Get the size of the input vector
        int n = arr.size();

        // Loop through the first half of the vector
        for (int i = 0; i < n / 2; i++) {
            // Swap the current element with the corresponding element from the end of
            // the vector
            // Temporary variable to hold the current element
            int t = arr[i];
            // Replace the current element with the element from the end
            arr[i] = arr[n - i - 1];
            // Replace the element from the end with the current element
            arr[n - i - 1] = t;
        }
    }
};