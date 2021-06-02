#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int fact(int n)
{
	int res = 1;

	for(int i=2; i<=n; i++)
	{
		res = res * i;
	}
	
	return res;
}

int main() {
    
        eff;
    	int number = 5;
    	
    	cout<<fact(number);
    	
    	return 0;
}