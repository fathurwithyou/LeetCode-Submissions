class Solution {
public:
    string countAndSay(int n) {
        string dp[31];
        dp[1] = '1';
        dp[2] = "11";
        dp[3] = "21";
        dp[4] = "1211";
        for(int i = 5; i <= n; i++){
            int cnt = 1, m = dp[i-1].size();
            for(int j = 1; j < m; j++){
                if(dp[i-1][j] != dp[i-1][j-1]){
                    dp[i] += cnt+'0';
                    dp[i] += dp[i-1][j-1];
                    cnt = 1;
                }
                else cnt++;
            }
            dp[i] += cnt+'0';
            dp[i] += dp[i-1][m-1];
        }
        return dp[n];
    }
};