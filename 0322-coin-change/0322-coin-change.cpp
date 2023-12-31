class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        long long dp[amount+1];
        for(int i = 0; i <= amount; i++) dp[i] = INT_MAX;
        dp[0] = 0;
        for(int i = 1; i <= amount; i++){
            for(int j = 0; j < coins.size(); j++){
                if(coins[j] <= i) dp[i] = min(dp[i], 1 + dp[i-coins[j]]);
            }
        }
        if (dp[amount] >= INT_MAX) return -1;
        else return dp[amount];
    }
};