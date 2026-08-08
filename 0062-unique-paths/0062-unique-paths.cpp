class Solution {
public:

    int dpHelper(int m, int n, vector<vector<int>>&dp){
        if(n==1 or m==1) return 1;
        if(dp[m][n]!=-1) return dp[m][n];
        dp[m][n] = dpHelper(m-1, n, dp)+dpHelper(m,n-1,dp);
        return dp[m][n];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1 ,-1));
        return dpHelper(m,n,dp);
        
        
        
    }
};