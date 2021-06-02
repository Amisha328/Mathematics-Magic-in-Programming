#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isPal(int n)
{
	int rev = 0;

	int temp = n;
	while(temp != 0)
	{
		int ld = temp % 10;

		rev = rev * 10 + ld;

		temp = temp / 10;
	}	

	return rev==n;
}
int main() {
        eff;
    	int number = 4553;
    	cout<<isPal(number);
    	return 0;
}