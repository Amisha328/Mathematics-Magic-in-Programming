#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int power(int x,int n)
{
    if(n==0)
        return 1;

    int temp=power(x,n/2);
    temp=temp*temp;
    if(n%2==0)
        return temp;
    else
        return temp*x;        
}

int main(){
    eff;
    int x,n;
    cin>>x>>n;
    cout<<power(x,n);
    
}


// Time complexity is O(log n)
