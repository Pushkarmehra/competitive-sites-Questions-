class Solution {
public:
    int maxSum(vector<int>& nums) {
        int hash[201] = {0};
        int result = 0;
        for(int i = 0; i < nums.size(); i++) {
            int index = nums[i] + 100; 
            if(hash[index] == 0) {
                hash[index] = 1;  
                if(nums[i] > 0) {
                    result += nums[i];  
                }
            }
        }
        
        if(result == 0) {
            int maxElement = -101;
            for(int i = 0; i < nums.size(); i++) {
                int index = nums[i] + 100;
                if(hash[index] == 1) {  
                    maxElement = max(maxElement, nums[i]);
                    hash[index] = 2;  
                }
            }
            return maxElement;
        }
        
        return result;
    }
};