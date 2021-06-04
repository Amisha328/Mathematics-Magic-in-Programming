#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPrime(int n)
{
if(n==1) return false;
    for(int i=2;i<n;i++)
        if(n%i==0)
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

//Time Complexity of this solution is O(n)