class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         sort(nums.begin(),nums.end());
         int j,i=0;
         while(i!=nums.size()-1){
            if(nums[i]==nums[i+1]){
                return true;
            }
            else{
                i++;
            }
         }
         return false;
    }

};