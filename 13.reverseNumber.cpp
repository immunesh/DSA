//Reverse a Number
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long revnum = 0;
        while(x){
            if (revnum>INT_MAX/10 || revnum<INT_MIN/10) return 0;
            int ld = x%10;
            revnum = (10*revnum)+ ld;
            x = x/10; 
        }
        return revnum;
    }
};