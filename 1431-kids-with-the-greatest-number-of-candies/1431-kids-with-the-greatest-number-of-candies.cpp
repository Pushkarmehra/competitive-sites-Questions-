class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = *max_element(candies.begin(), candies.end());
        vector<bool> result;
        
        for (int c : candies) {
            result.push_back(c + extraCandies >= maxCandies);
        }
        return result;
    }
};