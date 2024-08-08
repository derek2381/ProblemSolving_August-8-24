// problem link
// https://leetcode.com/problems/product-of-array-except-self/description/


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pref(n, 1), suff(n, 1),res(n);
        for(int i = 0; i <n;i++){
            if(i == 0){
                pref[i] = nums[i];
            }else{
                pref[i] = pref[i-1] * nums[i];
            }
        }

        for(int i = n-1;i >= 0;i--){
            if(i == n-1){
                suff[i] = nums[i];
            }else{
                suff[i] = suff[i+1]*nums[i];
            }
        }

        for(int i = 0; i <n;i++){
            if(i == 0){
                res[i] = suff[i+1];
            }else if(i == n-1){
                res[i] = pref[i-1];
            }else{
                res[i] = pref[i-1] * suff[i+1];
            }
        }

        return res;
    }
};