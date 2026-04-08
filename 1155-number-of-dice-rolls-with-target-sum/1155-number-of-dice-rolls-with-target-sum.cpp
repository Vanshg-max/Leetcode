class Solution {
public:
    int solve(int n, int k, int target,vector<vector<int>> &dp){
        if(n == 0&& target ==0){
            return 1;
        }
        if(n ==0 || target <=0){
            return 0;
        }
        if(dp[n][target] != -1){
            return dp[n][target];
        }
        long long ans = 0;
        int MOD = 1e9+7;

        for(int i =1; i<=k; i++){
            // ans -> + -> i-1 -> + recursive call
            if (target - i >= 0) {
            ans = (ans + solve(n-1,k,target-i,dp))% MOD;
            }
        }

        return dp[n][target] =(int)ans;
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp (n+1,vector<int>(target+1,-1));
        return solve(n,k,target,dp);

        
    }
};