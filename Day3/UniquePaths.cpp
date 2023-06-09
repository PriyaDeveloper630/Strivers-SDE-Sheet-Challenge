class Solution {
public:
    int countPaths(int r, int c, int m, int n,vector<vector<int>>&dp) {
        if (r == 0 && c == 0) {
            return 1;
        }
        if (r < 0 || r >= m || c < 0 || c >= n) {
            return 0;
        }
        if(dp[r][c]!=0){
            return dp[r][c];
        }
        int left = countPaths(r, c - 1, m, n,dp);
        int up = countPaths(r - 1, c, m, n,dp);
        return dp[r][c]= left + up;
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,0));
        return countPaths(m - 1, n - 1, m, n,dp);
    }
};
