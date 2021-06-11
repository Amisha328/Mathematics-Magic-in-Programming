//Sieve of Eratosthenes: It is a method to find all the prime numbers less than or equal to n.
// Example, 10 = 2 3 5 7

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPrime(int n){
    if(n==1)
        return false;
    if(n==2 || n==3)
        return true;
    if(n%2==0 || n%3==0)
        return false;
    for(int i=5;i*i<=n;i=i+6){
        if((n%i==0) || n%(i+2)==0)
            return false;
    } 
    return true;           
}

int main()
{
    // Explanation:
        // idea: i^2 , i^2 + i , i^2 + 2i ,.....
        // Earlier: 5 : 10,15,20,30,...
        // Now:     5 : 25,30,...
        
    eff;
    int n;
    cin>>n;
    vector<bool> isPrime(n+1,true);
    for(int i=2;i<=n;i++){
        if(isPrime[i])
        {
            cout<<i<<" ";

            for(int j=i*i;j<=n;j=j+i)
                isPrime[j]=false;    
        }
    }
    return 0;
}


// Time complexity is O(nlogn(log n))
