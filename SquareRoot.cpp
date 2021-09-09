// Square root
// Given an integer, we need to find floor of its square root.

#include<bits/stdc++.h>
using namespace std;
#define eff ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>

signed main(){
    eff;
    int n;
    cin>>n;

    int i = 1;
    while(i*i <= n)
    {
        i++;
    }

    cout<<i-1;
    return 0;
}

// Time Complexity: theta(sqrt(n))
// Space Complexity: theta(1)