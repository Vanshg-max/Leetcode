class Solution {
public:

    int solve(vector<int> & obstacles,int pos,int lane, vector<vector<int>>& dp){
        if(pos == obstacles.size() - 1) return 0;
        if(obstacles[pos+1] != lane) {return dp[pos][lane] =solve(obstacles,pos+1,lane,dp);}

        if(dp[pos][lane] != -1) return dp[pos][lane];

       
            int ans = INT_MAX;
            for(int i = 1; i<=3; i++){
                if(i != lane && obstacles[pos] != i){
                    ans = min(ans,1+solve(obstacles,pos,i,dp));
                }
            }
            dp[pos][lane] = ans;
            
            
        
        return dp[pos][lane];

    }
    int minSideJumps(vector<int>& obstacles) {
        int n = obstacles.size();
        vector<vector<int>> dp(n,vector<int>(4,-1));
        return solve(obstacles,0,2,dp);
        
    }
};