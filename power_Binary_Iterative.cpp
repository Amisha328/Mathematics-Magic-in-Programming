// Idea: every number can be writthen as sum of power of 2 (set bits in binary representation).

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int power(int x,int n){
    int res=1;
    while(n > 0)
    {
        if(n & 1)
            res = res * x;

        x=x*x;
        n=n>>1;
        
    }
    return res;
}

// Dry run:
// power(4,5) => x = 4 and n = 5
//             5:  1   0   0   1
//                4^4 4^3 4^2 4^1
//              res = 4^4 * 4^1 

int main(){
    eff;
    int x,n;
    cin>>x>>n;
    cout<<power(x,n);
    
}

// Time complexity is O(log n)
