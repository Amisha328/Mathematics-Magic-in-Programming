#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if(n==1) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i=5;i*i<=n;i=i+6)
        if(n%i==0 || n%(i+2)==0)
            return false;
    return true; 
}

void primefactors(int n)
{
    
    for(int i=2 ; i < n ; i++)
    {
        if(isPrime(i))
        {
            int x = i;
            while(n % x == 0)
            {
                cout << i <<" ";
                x = x * i;            
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    primefactors(n);
    return 0;
}

//Time complexity is O(n^2 log(n))