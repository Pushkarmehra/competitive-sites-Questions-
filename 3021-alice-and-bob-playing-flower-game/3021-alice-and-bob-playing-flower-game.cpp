class Solution {
public:
    long long flowerGame(int n, int m) {
        // Alice wins when total flowers (x + y) is odd
        // This happens when:
        // 1. x is odd and y is even
        // 2. x is even and y is odd
        
        // Count odd numbers in range [1, n]
        long long oddX = (n + 1) / 2;  // Numbers: 1, 3, 5, ..., n
        
        // Count even numbers in range [1, n]
        long long evenX = n / 2;       // Numbers: 2, 4, 6, ..., n
        
        // Count odd numbers in range [1, m]
        long long oddY = (m + 1) / 2;  // Numbers: 1, 3, 5, ..., m
        
        // Count even numbers in range [1, m]
        long long evenY = m / 2;       // Numbers: 2, 4, 6, ..., m
        
        // Alice wins when:
        // (x odd, y even) OR (x even, y odd)
        return oddX * evenY + evenX * oddY;
    }
};