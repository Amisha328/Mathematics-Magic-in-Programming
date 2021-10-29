// sum of the series 1-2+3-4+5-6+7-....n in O(1) time.

// If the last digit is n and is odd

/*
 n = 5
   S = 1-2+3-4+5
 + S =   1-2+3-4+5
  2S = 1-1+1-1+1+5
  2S = 1+5
  S = 6/2 = 3

  General : (n+1)/2

 n = 6
  S = 1-2+3-4+5-6
 + S =   1-2+3-4+5-6
  2S = 1-1+1-1+1-1-6
  2S = -6
  S = -6/2 = 3

  General : - n/2
*/

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main()
{
    eff;
    int n;
    cin>>n;
    int s = 0;
    if(!(n & 1))
    s = -(n/2);
    else
    s = (n+1)/2;

    cout<<s;
    return 0;
}