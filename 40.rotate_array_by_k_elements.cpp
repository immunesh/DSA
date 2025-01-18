//For Rotating Elements to right
/*
Approach 2: Using ” Reversal Algorithm “

Approach:

For Rotating Elements to right
Step 1: Reverse the last k elements of the array

Step 2: Reverse the first n-k elements of the array.

Step 3: Reverse the whole array.

*/

//Code
#include <iostream>
using namespace std;
// Function to Reverse the array
void Reverse(int arr[], int start, int end)
{
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
// Function to Rotate k elements to right
void Rotateeletoright(int arr[], int n, int k)
{
  // Reverse first n-k elements
  Reverse(arr, 0, n - k - 1);
  // Reverse last k elements
  Reverse(arr, n - k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 2;
  Rotateeletoright(arr, n, k);
  cout << "After Rotating the k elements to right ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}


/*
For Rotating Elements to left
Step 1: Reverse the first k elements of the array

Step 2: Reverse the last n-k elements of the array.

Step 3: Reverse the whole array.
*/

//Code
#include <iostream>
using namespace std;
// Function to Reverse the array
void Reverse(int arr[], int start, int end)
{
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
// Function to Rotate k elements to left
void Rotateeletoleft(int arr[], int n, int k)
{
  // Reverse first k elements
  Reverse(arr, 0, k - 1);
  // Reverse last n-k elements
  Reverse(arr, k, n - 1);
  // Reverse whole array
  Reverse(arr, 0, n - 1);
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 2;
  Rotateeletoleft(arr, n, k);
  cout << "After Rotating the k elements to left ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  return 0;
}

//Leetcode Problem
/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
*/

//Explaination
/*
Explanation:
Reduce k modulo n to handle cases where k is larger than the array size.
Reverse the entire array to bring the last k elements to the front in reverse order.
Reverse the first k elements to restore their original order.
Reverse the remaining part of the array to restore its order.
This approach modifies the array in-place with O(n) time complexity and O(1) space complexity.
*/

//Code
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());        
    }
};