//Recursive Insertion Sort Algorithm

//Approach
/*
In the iterative method, we did the following:

Take an element from the unsorted array(using an outer loop).
Place it in its corresponding position in the sorted part(using an inner loop).
Shift the remaining elements accordingly.
Now, in the recursive approach, we will just select the element recursively instead of using any loop. This is the only change we will do the recursive insertion sort algorithm and the rest of the part will be completely the same as it was in the case of iterative insertion sort.

The approach will be the following:

First, call the recursive function with the given array, the size of the array, and the index of the selected element(let's say i).
Inside that recursive function, take the element at index i from the unsorted array.
Then, place the element in its corresponding position in the sorted part(using swapping).
After that, Shift the remaining elements accordingly.
Finally, call the recursion increasing the index(i) by 1.
The recursion will continue until the index reaches n(i.e. All the elements are covered).
Base Case: if(i == n) return;
*/

//Code

#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int i, int n) {

    // Base Case: i == n.
    if (i == n) return;

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }

    insertion_sort(arr, i + 1, n);
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using insertion Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertion_sort(arr, 0, n);
    cout << "After Using insertion sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}