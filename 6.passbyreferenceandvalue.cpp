//Function (Pass by Reference and Value)

/*
Pass by Value:
The function addOneAndTwo receives a by value, meaning it operates on a copy of a. 
Any changes made to a inside the function do not affect the original variable.
When a += 1 is executed, only the local copy inside the function is modified.
Pass by Reference:
The function addOneAndTwo receives b by reference, meaning it operates directly on the original variable b.
When b += 2 is executed, the original variable b in the calling function is modified.
*/
//Code

#include <iostream>
using namespace std;

// Function that accepts one parameter by value and one by reference
void addOneAndTwo(int a, int& b) {
    a += 1;  // Increment the value passed by value
    b += 2;  // Increment the value passed by reference
}

int main() {
    int a, b;
    cout << "Enter values for a and b: ";
    cin >> a >> b;

    // Call the function
    addOneAndTwo(a, b);

    // Output the results
    cout << a << " " << b << endl;

    return 0;
}
