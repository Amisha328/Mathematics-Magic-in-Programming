// Problem Description: number of steps to reduce to zero
// allowed operations:
// n-1
// n/2 if divisible by 2
// n/3 if divisible by 3

// example:
// 19 -> 18 -> 9 -> 3 -> 1 -> 0 = 5


#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int fn(int n)
{
    if(n == 0)
      return 0;

    int a,b = INT_MAX,c= INT_MAX;

    a = fn(n-1)+1;

    if(n % 2 == 0)
      b = fn(n/2)+1;
   if(n % 3 == 0)
      c = fn(n/3)+1;   


   return min({a,b,c});   
}
signed main(){
    eff;
    int n;
    cin>>n;
    
    cout<< fn(n);

    return 0;
}