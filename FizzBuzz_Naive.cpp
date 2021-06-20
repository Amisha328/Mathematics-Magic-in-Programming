// FizzBuzz Question:
// % 3 -> fizz
// % 5 -> buzz
// % 15 -> fizzbuzz

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    eff;
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        if(i % 15 == 0)
            cout << "fizzbuzz\n";
        else if(i % 3 == 0)  
            cout << "fizz\n";
        else if(i % 5 == 0)
            cout << "buzz\n";
        else
            cout << i << "\n";       
    }
    return 0;
}