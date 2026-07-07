class Solution {
public:
    int climbStairs(int n) {
        
        vector<int> dp(3);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = dp[0] + dp[1]; 

        for(int i = 2;i <= n; i++){
            dp[0] = dp[1];
            dp[1] = dp[2];
            dp[2] = dp[0] + dp[1];
        }

        return dp[2];
    }
};
