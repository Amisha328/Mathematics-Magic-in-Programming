#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPrime(int n)
{

//Explanation:
    // 2 is the only even Prime number
    // 3 is the only number divisible by 3 which is Prime.
    // So, we can save many iterations by checking n%2==0 && n%3==0

    if(n==1) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i=5;i*i<=n;i=i+6)
        if(n%i==0 || n%(i+2)==0)
            return false;
    return true;        
          
}
//Dry run:
    //n = 1031

    // i = 5 => 5 * 5 = 25 < 1031
    // i = 5 --> false || i = 7 --> false

    // i = 11 => 11 * 11 = 121 < 1031
    // i = 11 --> false || i = 13 --> false

    // i = 17 => 17 * 17 = 289 < 1031
    // i = 17 --> false || i = 19 --> false

    // i = 23 => 23 * 23 = 529 < 1031
    // i = 23 --> false || i = 25 --> false

    // i = 29 => 29 * 29 = 841 < 1031
    // i = 29 --> false || i = 31 --> false

    // i = 35 => 35 * 35 = 1225 > 1031--> false

    //return true => Prime
    
int main(){
    eff;
    int t;
    cin>>t;
    if(isPrime(t)) cout<<"Prime";
    else cout<<"Composite";
    return 0;
}

