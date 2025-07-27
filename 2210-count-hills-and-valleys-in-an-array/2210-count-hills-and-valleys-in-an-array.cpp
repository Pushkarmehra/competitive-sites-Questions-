class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        for (int i = 1; i < n - 1; i++) {
            // Find closest non-equal neighbor on the left
            int left = -1;
            for (int j = i - 1; j >= 0; j--) {
                if (nums[j] != nums[i]) {
                    left = nums[j];
                    break;
                }
            }
            
            // Find closest non-equal neighbor on the right
            int right = -1;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] != nums[i]) {
                    right = nums[j];
                    break;
                }
            }
            
            // If we found both left and right non-equal neighbors
            if (left != -1 && right != -1) {
                // Check if it's a hill (current > both neighbors)
                // or valley (current < both neighbors)
                if ((nums[i] > left && nums[i] > right) || 
                    (nums[i] < left && nums[i] < right)) {
                    count++;
                    
                    // Skip consecutive equal elements to avoid double counting
                    while (i + 1 < n - 1 && nums[i + 1] == nums[i]) {
                        i++;
                    }
                }
            }
        }
        
        return count;
    }
};