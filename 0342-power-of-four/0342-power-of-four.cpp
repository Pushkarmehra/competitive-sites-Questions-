class Solution {
public:
    bool isPowerOfFour(int n) {
        // Check if n is positive, is a power of 2, and the bit is at even position
        return n > 0 && (n & (n - 1)) == 0 && (n & 0x55555555) != 0;
    }
};