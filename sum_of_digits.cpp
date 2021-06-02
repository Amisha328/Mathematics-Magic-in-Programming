
// Logarithmic solution of Sum of digits 

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    eff;
    int t;
    cin>>t;
    // if t=234
    // log10(234)+1 = 2.34+1 = 3.34
    // floor(3.34)=3.0
    cout<<floor(log10(t)+1);
    return 0;
}