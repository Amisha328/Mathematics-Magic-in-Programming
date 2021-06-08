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
    //If you want all divisors are not required to be in sorted order

    for(int j = 1 ; j * j <= n ; j++)
    {
        if(n % j == 0)
        {
            cout << j << " ";
            if(j != (n/j) )
               cout << (n / j) << " ";
        }
    }

    return 0;
}

// Time complexity is sqrt(n)