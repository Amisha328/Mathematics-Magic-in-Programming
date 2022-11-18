// Ugly Number
// Problem link:
// https://leetcode.com/problems/ugly-number/

// An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5

class Solution {
private:
    int factorization(int n, int x){
        while(n%x == 0){
            n /= x;
        }
        return n;
    }
public:
    bool isUgly(int n) {
        vector<int> factors = {2, 3, 5};
        if(n <= 0) return false;
        
        for(auto x: factors){
            n = factorization(n, x);
        }
        
        return n == 1;
    }
};
