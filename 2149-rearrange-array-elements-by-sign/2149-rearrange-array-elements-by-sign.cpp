class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;
        int n = nums.size();
        for (int num : nums) {
            if (num > 0) pos.push_back(num);
            else neg.push_back(num);
        }

        vector<int> result(n);
        int i = 0, j = 0, idx = 0;
        while (i < pos.size() && j < neg.size()) {
            result[idx++] = pos[i++];
            result[idx++] = neg[j++];
        }

        return result;
    }
};
