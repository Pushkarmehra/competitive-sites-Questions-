class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        vector<bool> used(n, false); // track which baskets are already used
        int unplaced = 0;

        for (int i = 0; i < n; ++i) {
            bool placed = false;
            for (int j = 0; j < n; ++j) {
                if (!used[j] && baskets[j] >= fruits[i]) {
                    used[j] = true; // mark the basket as used
                    placed = true;
                    break;
                }
            }
            if (!placed) {
                unplaced++; // this fruit couldn't be placed
            }
        }

        return unplaced;
    }
};
