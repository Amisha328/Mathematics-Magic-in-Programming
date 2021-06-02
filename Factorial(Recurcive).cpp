#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int fact(int n)
{
	if(n==0)
	   return 1;
		
	return n * fact(n-1);
}

int main() {
        eff;
    	int number = 5;
    	cout<<fact(number);
    	
    	return 0;
}