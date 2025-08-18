class Solution {
public:
    bool judgePoint24(vector<int>& cards) {
        vector<double> nums;
        for (int card : cards) {
            nums.push_back(card);
        }
        return backtrack(nums);
    }
    
private:
    const double EPS = 1e-6;
    
    bool backtrack(vector<double>& nums) {
        if (nums.size() == 1) {
            return abs(nums[0] - 24) < EPS;
        }
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                double a = nums[i], b = nums[j];
                vector<double> remaining;
                for (int k = 0; k < nums.size(); k++) {
                    if (k != i && k != j) {
                        remaining.push_back(nums[k]);
                    }
                }
                vector<double> candidates = {a + b, a - b, b - a, a * b};
                if (abs(b) > EPS) candidates.push_back(a / b);
                if (abs(a) > EPS) candidates.push_back(b / a);
                for (double candidate : candidates) {
                    remaining.push_back(candidate);
                    if (backtrack(remaining)) {
                        return true;
                    }
                    remaining.pop_back();
                }
            }
        }
        
        return false;
    }
};