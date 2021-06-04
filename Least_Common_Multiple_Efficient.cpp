#include<bits/stdc++.h>
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int gcd(int a, int b)
{
	if(b==0)
		return a;

	return gcd(b, a % b);
}

int lcm(int a, int b)
{
    // a*b=gcd(a,b)*lcm(a,b)
    return (a * b) / gcd(a, b);
}

int main() 
{
    eff;
    int a,b;
    cin>>a>>b;
    cout<< lcm(a,b);
    return 0;
}

//Time Complexity of this solution is O(log(min(a,b)))