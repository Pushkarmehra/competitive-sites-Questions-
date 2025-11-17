class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int> index;
        bool result=true;
        for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 1) {
            index.push_back(i);
        }}
        for(int i=0;i<index.size();i++){
            if(i+1>index.size()-1){
                return result;
            }
            if((index[i+1]-1-index[i])>=k){
                result=true;
            }
            else{
                return false;
            }
        }
        return result;
    
    }

};