//Problem Statement
/*
Print numbers from 1 to n without the help of loops. 
You only need to complete the function printNos() that takes n as a parameter and prints the number from 1 to n recursively.

Note: Don't print any newline, it will be added by the driver code.
*/

//Code by Pravesh
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Complete this function
    void printNos(int n) {
        if(!n) return;
         printNos(n-1);
        cout << n << ' ';
       
    }
};

//Code By me
class Solution {
  public:
    int count = 1;
    void printNos(int n) {
        
        if(count == n+1) return;
        cout<< count <<' ';
        count++;
        printNos(n);
       
    }
};