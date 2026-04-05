class Solution {
public:

    int solveMem(int i,int j, vector<vector<char>> &matrix, vector<vector<int>> &dp, int &maxi){
        //Base condition
        if(i >= matrix.size() || j >= matrix[0].size()) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        // traverse in right 
        int right =  solveMem (i,j+1,matrix,dp,maxi);
        // traverse in diagonal
        int diagonal = solveMem(i+1,j+1,matrix,dp,maxi);
        //traverse in down 
        int down = solveMem(i+1,j,matrix,dp,maxi);

        if(matrix[i][j] == '1'){
            int ans = 1 + min(right,min(diagonal,down));
            dp[i][j]= ans;
            maxi = max(maxi,ans);
            return dp[i][j];


        }
        else{
            return dp[i][j] = 0;
        }

    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int maxi = 0;
        vector<vector<int>> dp(n,vector<int>(m,-1));
        solveMem(0,0,matrix,dp,maxi);
        return maxi*maxi;
        
    }
};