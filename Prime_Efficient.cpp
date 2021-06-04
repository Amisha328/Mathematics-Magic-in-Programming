#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPrime(int n)
{
//Explanation:
    //Divisor always appears in pair 
    // 30: (1,30),(2,15),(3,10),(5,6)
    // if(x,y) is the pair
    // then x*x = n
    // and if x <= y
    // then x*x <= n

if(n==1) return false;
       for(int i=2;i*i<=n;i++)
           if(n%1==0)
             return false;
       return true;  
}

int main(){
    eff;
    int t;
    cin>>t;
    if(isPrime(t)) cout<<"Prime";
    else cout<<"Composite";
    return 0;
}


//Time Complexity of this solution is O(sqrt(n))