//  Balance After Rounded Purchase
// Problem link:
// https://leetcode.com/contest/biweekly-contest-110/problems/account-balance-after-rounded-purchase/

class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
      
        // if purchaseAmount%10 gives remainder less than 5 then nearest multiple of 10 is on left else to right (according to number line)
        if(purchaseAmount % 10 < 5)
            return (100 - (purchaseAmount/10)*10);
        else
            return (100 - ((purchaseAmount/10)+1)*10);
    }
};
