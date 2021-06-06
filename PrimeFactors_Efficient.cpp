#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void PrimeFactors(int n)
{

//Explanation:
      // 1. Divisors always appears in pairs like 30: (1,30),(2,15),(3,10),(5,6)
      // 2. A number n can be written as multiplication of power of prime factors.
      //    12 = 2^2 * 3^1
      //    450= 2^1 * 3^2 * 5^1  

	if(n <= 1)
		return;

	for(int i=2; i*i<=n; i++)
	{
		while(n % i == 0)
		{
			cout<<i<<" ";

			n = n / i;
		}
	}

	if(n > 1)
		cout<<n<<" ";

}
// Dry run:
//        n = 480
//        i = 2: print(2)
//               n = 225
//        i = 3: print(3)
//               n = 75
//               print(3)
//               n = 25
//        i = 4: 
//        i = 5: print(5)
//               n = 5
//               print(5)
//               n = 1  --> return
// outupt:  2 3 3 5 5

    int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    PrimeFactors(n);
    return 0;
}

