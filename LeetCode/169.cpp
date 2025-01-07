class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,ans=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(count==0){
                ans=nums[i];
            }
            if(nums[i]==ans){
                count++;
            }
            else{
                count--;
            }
        }
  return ans;
}
};
