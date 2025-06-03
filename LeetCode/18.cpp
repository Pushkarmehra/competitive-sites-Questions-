class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int n = nums.size();

        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                int p1 = j + 1;
                int p2 = n - 1;

                while (p1 < p2) {
                    long long sum = (long long)nums[i] + nums[j] + nums[p1] + nums[p2];

                    if (sum == target) {
                        result.push_back({nums[i], nums[j], nums[p1], nums[p2]});
                        p1++;
                        p2--;

                        while (p1 < p2 && nums[p1] == nums[p1 - 1]) p1++;
                        while (p1 < p2 && nums[p2] == nums[p2 + 1]) p2--;
                    } else if (sum < target) {
                        p1++;
                    } else {
                        p2--;
                    }
                }
            }
        }

        return result;
    }
};
