class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> result;  // Store all unique OR values
        unordered_set<int> current; // OR values for subarrays ending at current position
        
        for (int num : arr) {
            unordered_set<int> next;
            next.insert(num); // Subarray containing only current element
            
            // Extend all subarrays ending at previous position
            for (int prev : current) {
                next.insert(prev | num);
            }
            
            // Add all new OR values to result
            for (int val : next) {
                result.insert(val);
            }
            
            current = next;
        }
        
        return result.size();
    }
};