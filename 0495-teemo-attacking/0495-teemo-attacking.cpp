class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int total = 0;
        int n = timeSeries.size();
        for (int i = 1; i < n; i++) {
            int gap = timeSeries[i] - timeSeries[i - 1];
            total += min(gap, duration);
        }
        total += duration;
        
        return total;
    }
};
