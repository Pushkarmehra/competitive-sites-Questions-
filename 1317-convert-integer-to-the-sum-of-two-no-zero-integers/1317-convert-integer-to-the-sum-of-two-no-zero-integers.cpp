class Solution {
public:
    // Helper function to check if number has no zero digit
    bool noZero(int x) {
        while (x > 0) {
            if (x % 10 == 0) return false;
            x /= 10;
        }
        return true;
    }

    vector<int> getNoZeroIntegers(int n) {
        for (int a = 1; a < n; a++) {
            int b = n - a;
            if (noZero(a) && noZero(b)) {
                return {a, b};
            }
        }
        return {}; // This will never happen (guaranteed by problem)
    }
};
