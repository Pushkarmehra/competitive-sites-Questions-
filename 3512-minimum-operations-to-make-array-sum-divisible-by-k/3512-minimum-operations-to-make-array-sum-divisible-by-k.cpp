class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size()-1;
        int count=0;
        int sum=0;
        int multiplier;
        for(int i=0 ;i<nums.size();i++){
            sum+=nums[i];
        }
        multiplier=sum/k;
        count=(sum-(multiplier*k));
        return count;
    }
};