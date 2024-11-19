/*
Approach Explanation:
The problem requires determining the size in bytes of different data types: Character, Integer, Long, Float, and Double. 
In C++, each of these data types has a fixed size depending on the platform and compiler. 
The size can be determined using the sizeof() operator, which returns the size in bytes of any data type. 
By mapping each data type string to its corresponding C++ data type and then using the sizeof() operator, 
we can efficiently return the size for the given input.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string dataType;
    cin >> dataType;

    if (dataType == "Character") {
        cout << sizeof(char) << endl;
    } 
    else if (dataType == "Integer") {
        cout << sizeof(int) << endl;
    } 
    else if (dataType == "Long") {
        cout << sizeof(long) << endl;
    } 
    else if (dataType == "Float") {
        cout << sizeof(float) << endl;
    } 
    else if (dataType == "Double") {
        cout << sizeof(double) << endl;
    } 
    else {
        cout << "Invalid Data Type" << endl;
    }

    return 0;
}
