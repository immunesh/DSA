// Reverse Number Triangle

/*
1 2 3
1 2
1
*/


//code
#include<bits/stdc++.h>
using namespace std;
void nNumberTriangle(int n) {
    // Write your code here.
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n+1)-i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}