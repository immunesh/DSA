// if-else (Decision Making)
//Given two integers, n and m. The task is to check the relation between n and m.

//Code 
#include<bits/stdc++.h>
class Solution {
  public:
    string compareNM(int n, int m){
         if(n>m){
            return "greater";
         }else if (m>n){
             return "lesser";
         }else {
            return "equal";
         }
    }
};