// Given an array, arr[]. Sort the array using bubble sort algorithm.

/*
The algorithm steps are as follows:

First, we will select the range of the unsorted array. For that, we will run a loop(say i) that will signify the last index of the selected range. The loop will run backward from index n-1 to 0(where n = size of the array). The value i = n-1 means the range is from 0 to n-1, and similarly, i = n-2 means the range is from 0 to n-2, and so on.
Within the loop, we will run another loop(say j, runs from 0 to i-1 though the range is from 0 to i) to push the maximum element to the last index of the selected range, by repeatedly swapping adjacent elements.
Basically, we will swap adjacent elements(if arr[j] > arr[j+1]) until the maximum element of the range reaches the end.
Thus, after each iteration, the last part of the array will become sorted. Like: after the first iteration, the array up to the last index will be sorted, and after the second iteration, the array up to the second last index will be sorted, and so on.
After (n-1) iteration, the whole array will be sorted.
Note: Here, after each iteration, the array becomes sorted up to the last index of the range.
That is why the last index of the range decreases by 1 after each iteration.
This decrement is achieved by the outer loop and the last index is represented by variable i in the following code.
And the inner loop(i.e. j) helps to push the maximum element of range [0….i] to the last index(i.e. index i).
*/

// Code

#include <bits/stdc++.h>
using namespace std;

// User function Template for C++

class Solution
{
public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int> &arr)
    {
        int n = arr.size();
        for (int i = n - 1; i >= 0; i--)
        {
            int didSwap = 0;
            for (int j = 0; j <= i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                    didSwap = 1;
                }
            }
            if (didSwap == 0)
            {
                break;
            }
        }
    }
};