//N - Forest

/*
------------------------------------------
* * *
* * *
* * *
-------------------------------------------
*/

// Code
#include<bits/stdc++.h>
using namespace std;

void nForest(int n) {
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << "* ";
		}
		cout<<endl;
	}
}


//N/2- Forest

/*
---------------------------------
* 
* *
* * *
----------------------------------
*/

//code

void nForest(int n) {
	for(int i =1; i<=n; i++){
		for(int j = 1; j <=i; j++){
			cout<<"* ";
		}
		cout << endl;
	}
}
