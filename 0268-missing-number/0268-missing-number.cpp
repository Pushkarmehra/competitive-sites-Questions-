class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum_nums=0;
        int sum_new=0;
        for(int i=0;i<=nums.size();i++){
            sum_new+=i;
            if(i<=nums.size()-1){
                sum_nums+=nums[i];
            }
        }
        int result=sum_new-sum_nums;
        return result;
    }
};