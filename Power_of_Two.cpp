// An integer n is a power of two, if there exists an integer x such that n == 2^x.

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPowerOfTwo(int n)
{
      if(n>=0){  
       if(n == 0)
         return false;
     return ((n & (n - 1)) == 0); 
    }
    else
        return false;
}

signed main(){
    eff;
    int n;
    cin>>n;
    if(isPowerOfTwo(n)) cout<<"It is a power of two";
    else cout<<"It is not a power of two";
    return 0;
}
