class Solution {
public:
    int solveMem(vector<int>&nums,vector<int> &dp, int target){
        if(target < 0) return 0;
        if(target == 0) return 1;
        if(dp[target] != -1) return dp[target];

        long long ans = 0;
        for(int i = 0; i< nums.size(); i++){
            ans += solveMem(nums,dp,target - nums[i]);
        }
        dp[target] = ans;
        return dp[target];
    }
    int combinationSum4(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> dp(target+1, -1); 

        return solveMem(nums,dp,target);
        


        
    }
};