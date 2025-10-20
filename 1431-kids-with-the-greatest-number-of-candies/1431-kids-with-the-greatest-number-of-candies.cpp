class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
         int maximum = *max_element(candies.begin(), candies.end());
        for(int i=0;i<=candies.size()-1;i++){
            result.push_back(maximum<=(extraCandies+candies[i]));
        }
        return result;
    }
};