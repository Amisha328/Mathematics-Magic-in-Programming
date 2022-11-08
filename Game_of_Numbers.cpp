// Problem statement:
/*
Jenny and Ben have developed a game of numbers. They take a number and check if it is a power of 2. If it is, they divide the number by 2. If not, they reduce it by the next lower power of 2. They do operation on the number alternatively.
Whoever reduces the number to 1 wins the game. Jenny always starts. Given an initial value, determine who wins the game.

Example
number=132

Jenny starts. She determines that 132 is not a power of 2 . The next lower power of 2  is 128 , so she subtracts 128 from 132 and passes  4 to Ben. 
4 is a power of 2, so Ben divides it by  2 and passes 2 to Jenny. Likewise, 2  is a power of 2 so she divides it by  2 and reaches 1 . She wins the game.

Note: If they initially set number to 1, Ben wins. Jenny cannot make a move so she loses.

Input Format:

The first line contains an integer t , the number of testcases.
Each of the next t  lines contains an integer n, the initial value for each game.

*/


#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
      if(n>0){  
       if(n == 0)
         return false;
     return ((n & (n - 1)) == 0); 
    }
    else
        return false;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int turn = 1;
        while(n != 1){
            if(isPowerOfTwo(n)){
                n /= 2;
            }
            else{
                int temp = n;
                // do till only one bit is left
                while (n & n - 1) {
                        n = n & n - 1;        // unset rightmost bit
                }
                n = temp - n;
            }
            turn++;
        }
         if(turn%2 == 0) cout<<"Jenny"<<endl;
         else cout<<"Ben"<<endl;
    }
  
    return 0;
}
