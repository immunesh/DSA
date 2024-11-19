// Switch Case Statement

/*
Function Signature: The function calculateArea(int choice, vector<double> arr) is the same as before but now uses a switch statement to determine the action based on the user's choice.

Switch Statement:

Case 1: If choice == 1, it calculates the area of a circle using the formula π * R * R.
Case 2: If choice == 2, it calculates the area of a rectangle using the formula L * B.
Default: If the choice is neither 1 nor 2, it prints "Invalid choice." and returns -1.
Main Function:

Depending on the user's input for choice, the appropriate dimensions are taken and stored in the vector arr.
The switch statement in main() handles the input differently based on the choice.
Output: If the choice is valid, the calculated area is printed; otherwise, an error message is shown.

*/

//Code

#include <iostream>
#include <vector>
#include <cmath> // for M_PI

using namespace std;

double calculateArea(int choice, vector<double> arr) {
    double area = 0;

    switch (choice) {
        case 1:
            // Calculate the area of a circle: π * R * R
            area = M_PI * arr[0] * arr[0];
            break;

        case 2:
            // Calculate the area of a rectangle: L * B
            area = arr[0] * arr[1];
            break;

        default:
            // Invalid choice
            cout << "Invalid choice." << endl;
            return -1;
    }

    return area;
}

int main() {
    int choice;
    cout << "Enter choice (1 for Circle, 2 for Rectangle): ";
    cin >> choice;

    vector<double> arr;
    
    switch (choice) {
        case 1:
            double R;
            cout << "Enter radius R: ";
            cin >> R;
            arr.push_back(R);
            break;
        
        case 2:
            double L, B;
            cout << "Enter length L and breadth B: ";
            cin >> L >> B;
            arr.push_back(L);
            arr.push_back(B);
            break;

        default:
            cout << "Invalid choice." << endl;
            return 0;
    }

    double area = calculateArea(choice, arr);

    if (area != -1) {
        cout << "The area is: " << area << endl;
    }

    return 0;
}
