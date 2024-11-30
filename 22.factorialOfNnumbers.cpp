//Problem Statement
//Find all factorial numbers less than or equal to n
/*
A number n is called a factorial number if it is the factorial of a positive integer. 
For example, the first few factorial numbers are 1, 2, 6, 24, 120,
Given a number n, the task is to return the list/vector of the factorial numbers smaller than or equal to n.
*/

//code

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
// Function to find factorial numbers less than or equal to N.
vector<long long> factorialNumbers(long long n) {
vector<long long> ans;
long long int fact = 1;
int x = 2;

// Iterating until factorial is less than or equal to N.
while (fact <= n) {
// Adding factorial to the answer list.
ans.push_back(fact);

// Calculating next factorial by multiplying with next number.
fact = fact * x;
x++;

}
// Returning the list of factorial numbers.
return ans;

}
};
