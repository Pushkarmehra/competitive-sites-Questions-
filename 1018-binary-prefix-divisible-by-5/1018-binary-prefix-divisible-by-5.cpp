class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int binary=0;
        vector<bool> result;
        for(int i=0;i<nums.size();i++){
            binary = (binary * 2 + nums[i])%5;
            if(binary%5==0){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        return result;
    }
};