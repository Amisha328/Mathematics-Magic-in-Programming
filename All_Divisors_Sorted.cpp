// Divisors:
// 15 -> 1 3 5 15

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    eff;
    int n;
    cin >> n;
    //If you want all divisors in sorted order

    int i;
    for(i = 1 ; i * i < n ; i++)
    {
        //Print all divisors from 1(inclusive) to sqrt(n)(exclusive)
        if(n % i == 0)
        {
            cout << i << " ";
        }
    }

    for( ; i >= 1 ; i--)
    {
      //Print all divisors from sqrt(n)(inclusive) to n(exclusive)
      if(n % i == 0)
      {
          cout << (n / i) << " ";
      }
    }

    return 0;
}

// Time complexity is sqrt(n)