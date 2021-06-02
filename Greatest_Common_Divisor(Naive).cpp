// Greatest Common Divisior of two numbers

// Smallest number that divides both the numbers.


#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int gcd(int a,int b)
{
    int res=min(a,b);
      while(res>0)
      {
          if(a%res==0 && b%res==0)
            break;
          res--;  
      }
    return res;

}
int main()
{
    eff;
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}