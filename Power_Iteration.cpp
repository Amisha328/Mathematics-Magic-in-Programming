#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int power(int x,int n)
{
    int res=1;
    while(n>0)
    {
        if(n % 2 != 0)
            res = res * x;
        x = x * x;
        n=n/2;   
        
    }
    return res;
}

int main(){
    eff;
    int x,n;
    cin>>x>>n;
    cout<<power(x,n);
    
}


// Time complexity is O(log n)
