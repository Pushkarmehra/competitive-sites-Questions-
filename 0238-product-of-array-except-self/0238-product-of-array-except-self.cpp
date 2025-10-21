class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n=nums.size();
        vector<int> result(n, 1);
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);

    prefix[0]=1;
    suffix[n-1]=1;
    for(int i=1;i<=n-1;i++)
        prefix[i]=prefix[i-1]*nums[i-1];
    for(int i=n-2;i>=0;i--)
        suffix[i]=suffix[i+1]*nums[i+1];
    for (int i=0;i<=n-1;i++)
        result[i] =prefix[i]*suffix[i];
    return result;
    }
};