class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long result = 0;
        long long consecutiveZeros = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                consecutiveZeros++;
            } else {
                if (consecutiveZeros > 0) {
                    result += (consecutiveZeros * (consecutiveZeros + 1)) / 2;
                    consecutiveZeros = 0;
                }
            }
        }
        if (consecutiveZeros > 0) {
            result += (consecutiveZeros * (consecutiveZeros + 1)) / 2;
        }
        
        return result;
    }
};