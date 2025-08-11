class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n; 
        auto reverseRange = [&](int left, int right) {
            while (left < right) {
                swap(nums[left], nums[right]);
                left++;
                right--;
            }
        };
        reverseRange(0, n - 1);
        reverseRange(0, k - 1);
        reverseRange(k, n - 1);
    }
};
