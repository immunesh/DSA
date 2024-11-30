//Problem Statement 
/*
Print numbers from N to 1 (space separated) without the help of loops.
*/

//code
#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    void printNos(int N) {
        if(!N) return;
        cout<<N<<' ';
        printNos(N-1);
    }
};