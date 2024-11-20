// Star Triangle
/*
-------------------------
 *
 ***
*****
--------------------------
*/

//code
#include<bits/stdc++.h>
using namespace std;
void nStarTriangle(int n) {
    // Write your code here.
    for(int i=1; i<=n; i++){
        cout << string(n-i,' ')<< string(2*i - 1, '*')<<endl;
    }
}

// Reverse Star Triangle
/*
--------------
*****
 ***
  * 
--------------
*/

//code

void nStarTriangle(int n) {
    // Write your code here.
    for(int i=n; i>=1; i--){
        cout<<string(n-i,' ')<<string(2*i-1,'*')<<endl; 
    }
}

// Star Diamond
/*
  *
 ***
*****
*****
 ***
  *
*/

//code

void nStarDiamond(int n) {
    for(int i=1; i<=n; i++){
        cout<<string(n-i,' ')<<string(2*i-1,'*')<<endl;
    }
    for(int i=n; i>=1; i--){
        cout<<string(n-i,' ')<<string(2*i-1,'*')<<endl;
    }                  
}

// Rotated Triangle
/*
----------------
*
**
***
**
*
----------------
*/

//code

void nStarTriangle(int n) {
    for(int i = 1; i <=2*n-1; i++){
        int stars = i;
        if (i > n) stars = 2 * n - i;
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

//Binary Number Triangle
/*
1
0 1
1 0 1
*/

//code

void nBinaryTriangle(int n) {
    int start;
    for(int i =0; i<n; i++){
        if(i%2==0) start = 1;
        else start = 0;
        for(int j=0; j<=i; j++){
            cout<<start<<" ";
            start = 1-start;
        }
        cout<<endl;
    }
}


//Number Crown
/*
1         1
1 2     2 1
1 2 3 3 2 1

*/

//code

void numberCrown(int N) {
      
      // Outer loop for the number of rows.
      for(int i=1;i<=N;i++){
          
          // for printing numbers in each row
          for(int j=1;j<=i;j++){
              cout<<j<<" ";
          }
          
          // for printing spaces in each row
          for(int j = 1;j<=4*(N - i);j++){
              cout<<" ";
          }
          
          // for printing numbers in each row
          for(int j=i;j>=1;j--){
              cout<<j<<" ";
          }
          
          // As soon as the numbers for each iteration are printed, we move to the
          // next row and give a line break otherwise all numbers
          // would get printed in 1 line.
          cout<<endl;
          
          // After each iteration nos. increase by 2, thus
          // spaces will decrement by 2.
      }
}


//Increasing Number Triangle
/*
1
2 3
4 5 6
*/

//code
void nNumberTriangle(int n) {
    int num = 1;
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num = num+1;
        }
        cout<<endl;
    }
}

//Increasing Letter Triangle
/*
A
A B
A B C
*/

//code
void nLetterTriangle(int n) {
    
    for(int i=1; i<=n; i++){
        for(char ch='A'; ch<'A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}


//Reverse Letter Triangle
/*
A B C
A B
A
*/

//code

void nLetterTriangle(int n) {
    for(int i=1; i<=n; i++){
        for(char ch='A'; ch<='A'+(n-i); ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

//Alpha Ramp
/*
A
B B
C C C
*/

//code
void alphaRamp(int n) {
    for(int i=0; i<n; i++){
        char ch = 'A'+i;
        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

//Alpha Hill
/*
  A
  A B A
A B C B A
*/

void alphaHill(int n) {
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
        cout<<" ";
        }
        char ch = 'A';
        int b = (2*i+1)/2;
        for(int j=1; j<=(2*i+1); j++){
            cout<<ch<<" ";
            if(j<=b) ch++;
            else ch--;
        }
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

//Alpha Triangle
/*
C
C B 
C B A
*/

//code
void alphaTriangle(int n) {
    char ch1='A'+n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            char ch2 = ch1-j;
            cout<<ch2<<" ";
            
        }
        cout<<endl;
    }
}


//Symmetric Void
/*
* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * * 
*/

//code

void symmetry(int N) {
    // initial spaces.
      int iniS = 0;
      for(int i=0;i< N;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=N-i;j++){
              cout<<"* ";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=N-i;j++){
              cout<<"* ";
          }
          
          // The spaces increase by 2 every time we hit a new row.
          iniS+=2;
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
      
      // for lower half of the pattern
      
      // initial spaces.
      iniS = 2*N -2;
      for(int i=1;i<=N;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"* ";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"* ";
          }
          
          // The spaces decrease by 2 every time we hit a new row.
          iniS-=2;
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
      }
      
}


//Symmetry
/*
*         *
* *     * *
* * * * * *
* *     * *
*         *
*/

//code

void symmetry(int n) {
    int spaces = 2*n-2;
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1; j<=stars; j++){
            cout<<"* ";
        }
        
        for(int j=1; j<=spaces; j++){
            cout<<" ";
        }

        for(int j=1; j<=stars; j++){
            cout<<"* ";
        }
        cout<<endl;
        if(i<n) spaces-=2;
        else spaces+=2;
    }
}

// Ninja And The Star Pattern I
/*
****
*  *
*  *
****
*/

//code

void getStarPattern(int n) {
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}


//Ninja And The Number Pattern
/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/

//code
void getNumberPattern(int n) {
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout<<(n-min(min(top,left), min(right,down)));
        }
        cout<<endl;
    }
}
