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
        // Mark all the places in vector from 2 to n-1 as true.
        // Places 0 and 1 are not marked as they are not prime.
        // Then traverse from i = 2 to n and mark all its multiple index positions as false
        // After the entire iterations the index that have true ate its index are the desired prime numbers < n.

    eff;
    int n;
    cin>>n;
    vector<bool> isPrime(n+1,true);
    for(int i=2;i*i<=n;i++)
    {
        if(isPrime[i])
            {
                for(int j=2*i;j<=n;j=j+i){
                    isPrime[j]=false;
                }
            }

    }
    for(int i=2;i<=n;i++)
    {
        if(isPrime[i])
            cout<<i<<" ";
    }
}



