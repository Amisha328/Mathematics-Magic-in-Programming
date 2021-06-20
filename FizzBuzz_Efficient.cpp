// FizzBuzz Question:
// % 3 -> fizz
// % 5 -> buzz
// % 15 -> fizzbuzz

// Problem with Naive solution: % 15 is equivalent to % 3 && % 5
// Hence, there is no point in checking the same condition again.

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    eff;
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        string d ="";
        if(i % 3 == 0) d += "fizz";
        if(i % 5 == 0) d += "buzz";
        if(d == "") cout << i << "\n";
        else cout<< d << "\n"; 
    }
    return 0;
}