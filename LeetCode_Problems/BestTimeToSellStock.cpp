// problem link
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_prof = 0;
        int n = prices.size();

        int cp = prices[0];
        for(int i = 1;i < n;i++){
            if(prices[i] < cp){
                cp = prices[i];
            }else{
                int val = prices[i] - cp;
                if(val > max_prof){
                    max_prof = val;
                }
            }
        }

        return max_prof;
    }
};