class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        int z=0;
        for(int i=0;i<=n-1;i++){
            if(nums[i]!=0){
                nums[z]=nums[i];
                z++;
            }        
        }
        for(int i=z;i<n;i++){
            nums[i]=0;
        }
    }
};