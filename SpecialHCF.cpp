// Special HCF

// Problem statement:

/*
Given N number of queries, consisting of the starting value and ending value of a range [L,R], your task
is to return the Special HCF for each of the queries. Special HCF refers to the highest count of factors,
that a number within the range(inclusive of starting and ending range) can have.   

Example:

Given 2 queries having the starting and ending values of range as [2,10] and [50,100], the Special HCF 
values will be 4 and 12 respectively. This is because in the range [2,10] the numbers 2, 3, 5 and 7 
have 2 factors each, the numbers 4 and 9 have 3 factors each and the numbers 6, 8 and 10 have 4 factors 
each. So, the highest count of factors for the given range is 4. Similarly for the range [50,100] the 
numbers 60, 72, 84, 90 and 96 have 12 factors each and all other numbers in the range have less than 12 
factors and so the answer of the query for this range is 12.
*/

#include <bits/stdc++.h>
using namespace std;

int factor(int num){
    int count = 0;
    for (int i = 1; i * i <= num; ++i) {
        if (num % i == 0) {
            // Increment count for both factors i and num / i
            if (i * i == num) {
                count++;
            } else {
                count += 2;
            }
        }
    }
    return count;
}
int countFactors(int L, int R){
  int cntFact = 0;
  for(int i = L; i <= R; i++){
    cntFact = max(cntFact, factor(i));
  }
  return cntFact;
}
int main() {
	int q;
    cin>>q;
    while(q--){
      int L, R;
      cin>>L>>R;
      cout<<countFactors(L, R)<<endl;
    }
	return 0;
}
