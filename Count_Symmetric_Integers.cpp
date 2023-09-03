// Count Symmetric Integers
// Problem link:
// https://leetcode.com/contest/weekly-contest-361/problems/count-symmetric-integers/

// Code 1:
class Solution {
public:
    int countDigit(long long n) { 
      return floor(log10(n) + 1); 
    }
    bool isSymetric(long long x){
        if(countDigit(x)%2 == 0){
            string num = to_string(x);
            int c1 = 0, c2 = 0;
            for(int i  = 0; i < num.size()/2; i++){
                c1 += (int)(num[i]);
            }
            for(int i = num.size()/2; i < num.size(); i++){
                c2 += (int)(num[i]);
            }
            if(c1 == c2) return true;
            else return false;
        }
        else return false;
    }
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i = low; i <= high; i++){
            if(isSymetric(i)) count++;
        }
        return count;
    }
};

// Code 2:
class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i = low; i <= high; i++){
            string s = to_string(i);
            int sum = 0;
            // if number of digits is odd then continue
            if(s.size() & 1) continue;
            for(int j = 0; j < s.size(); j++){
                // for the first half
                if(2 * j < s.size()) sum += s[j] - '0';
                else sum -= s[j] - '0';
            }
            if(sum == 0) count++;
        }
        return count;
    }
};
