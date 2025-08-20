class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i=0;
        while(i < nums.size()){                
            int j = i + k;                    
            if(j >= nums.size()) j = nums.size()-1; 
            for(int x = i+1; x <= j; x++){     
                if(nums[i] == nums[x]){
                    return true;
                }
            }
            i++; 
        }
        return false;
    }
};
