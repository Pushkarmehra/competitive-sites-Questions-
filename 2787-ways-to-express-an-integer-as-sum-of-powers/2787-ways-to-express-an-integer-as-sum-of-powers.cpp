class Solution {
public:
    int numberOfWays(int n, int x) {
        const int MOD = 1000000007;
        vector<long long> dp(n + 1, 0);
        dp[0] = 1;
        for (int num = 1; ; num++) {
            long long power = 1;
            for (int i = 0; i < x; i++) {
                power *= num;
                if (power > n) break;
            }
            if (power > n) break; 
            for (int sum = n; sum >= power; sum--) {
                dp[sum] = (dp[sum] + dp[sum - power]) % MOD;
            }
        }
        
        return dp[n];
    }
};