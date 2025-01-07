class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int  n=nums.size();
        //sort
        sort(nums.begin(),nums.end());
        //major
        int count=1,ans=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                count=1;
                ans=nums[i];
            }
            if(count>n/2){
                return ans;
            }
        }
  return ans;
}
};
