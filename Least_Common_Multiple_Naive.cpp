#include<bits/stdc++.h>
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int lcm(int a,int b)
{
    int res=max(a,b);
    while(1)
    {
        if(res%a==0 && res%b==0)
            return res;

        res++;  
    }
}

int main()
{
    eff;
    int a,b;
    cin>>a>>b;
    cout<< lcm(a,b);
    return 0;
}
