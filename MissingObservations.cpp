// Find Missing Observations
// https://leetcode.com/problems/find-missing-observations/description/

class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int sum = accumulate(rolls.begin(), rolls.end(), 0);
        int sumOfMissing = (mean * (n+m)) - sum;

        if(sumOfMissing > (n * 6) || sumOfMissing < n) return {};

        int rem = sumOfMissing % n;
        int ques = sumOfMissing / n;

        vector<int> ans(n, ques);
        for(int i = 0; i < rem; i++){
            ans[i]++;
        }
        return ans;
    }
};
