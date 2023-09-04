// Minimum Operations to Make a Special Number
// Problem link:
// https://leetcode.com/contest/weekly-contest-361/problems/minimum-operations-to-make-a-special-number/


class Solution {
public:
    int minimumOperations(string num) {
        int n = num.size();
        int minDeletes = n;
        
        if(find(num.begin(), num.end(), '0') != num.end()) minDeletes--;
        
        for(auto s: vector<string>{"00", "25", "50", "75"}){
            int idx = 1;  // indicates the index postion of string s - "00", "25", "50", or "75"
            int cnt = 0; // it will hold cnt of number of char to be deleted to form a substring that has "00", "25", "50", or "75" together.
            for(int i = n-1; i >= 0; i--){
                if(num[i] == s[idx]){
                    idx--;
                    // if idx < 0 means "00", "25", "50", or "75" is found and now the number is divisble by 25. Hence no further deletion is required.
                    if(idx < 0) break; 
                }
                else cnt++;
            }
            if(idx < 0) minDeletes = min(minDeletes, cnt);
        }
        return minDeletes;
    }
};
