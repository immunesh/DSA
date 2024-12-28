//Problem Statement
/*
Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0; // To count the number of breaks in ascending order
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
                if (count > 1) return false; // More than one break indicates not sorted and rotated
            }
        }
        return true; // Valid sorted and rotated array
    }
};


/*
Explanation:
Traverse the array while checking for ascending order violations.
If an element is greater than the next (considering circular indexing), increment a counter.
If the counter exceeds 1, the array is neither sorted nor rotated, so return false.
If traversal completes with at most one break, the array is sorted and rotated. Return true.
Circular indexing is handled using (i + 1) % n to wrap around.
*/