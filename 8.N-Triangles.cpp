// N- Triangles

/*
1
1 2 
1 2 3
*/

//code
#include<bits/stdc++.h>
using namespace std;

void nTriangle(int n) {
	for( int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}


//Triangle
/*
1
2 2 
3 3 3
*/

//code 
void triangle(int n) {
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}