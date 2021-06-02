// Greatest Common Divisior of two numbers

// Smallest number that divides both the numbers.

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//Optimal implementation of Euclidean Algorithm
//if b<a the gcd(a,b)=gcd(a-b,b)

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

//Explanation:
   // a=12, b=15
   //gcd(12,15) -> gcd(15,12) -> gcd(12,3) -> gcd(3,0)
   // return a when b=0 i.e. 3
int main()
{
    eff;
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}
           