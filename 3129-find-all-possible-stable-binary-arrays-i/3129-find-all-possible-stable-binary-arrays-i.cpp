#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfStableArrays(int zero, int one, int limit) {
        const int MOD = 1e9 + 7;

        vector<vector<long long>> dp0(zero + 1, vector<long long>(one + 1));
        vector<vector<long long>> dp1(zero + 1, vector<long long>(one + 1));

        for (int i = 1; i <= min(zero, limit); i++) dp0[i][0] = 1;
        for (int j = 1; j <= min(one, limit); j++) dp1[0][j] = 1;

        for (int i = 0; i <= zero; i++) {
            for (int j = 0; j <= one; j++) {

                for (int k = 1; k <= limit && k <= i; k++) {
                    dp0[i][j] = (dp0[i][j] + dp1[i-k][j]) % MOD;
                }

                for (int k = 1; k <= limit && k <= j; k++) {
                    dp1[i][j] = (dp1[i][j] + dp0[i][j-k]) % MOD;
                }
            }
        }

        return (dp0[zero][one] + dp1[zero][one]) % MOD;
    }
};