class Solution {
public:
    double soupServings(int n) {
        // For large n, the probability approaches 1.0 due to bias toward A
        if (n >= 4800) return 1.0;
        
        // Convert to units of 25mL for simplification
        // Use ceiling division to handle cases where n is not divisible by 25
        int units = (n + 24) / 25;
        
        // Memoization map
        unordered_map<long long, double> memo;
        
        return solve(units, units, memo);
    }
    
private:
    double solve(int a, int b, unordered_map<long long, double>& memo) {
        if (a <= 0 && b <= 0) return 0.5;  
        if (a <= 0) return 1.0;            
        if (b <= 0) return 0.0;            
        
        long long key = ((long long)a << 32) | b;
        if (memo.find(key) != memo.end()) {
            return memo[key];
        }
        
        
          double result = 0.25 * (
            solve(max(0, a - 4), b, memo) +           
            solve(max(0, a - 3), max(0, b - 1), memo) + 
            solve(max(0, a - 2), max(0, b - 2), memo) + 
            solve(max(0, a - 1), max(0, b - 3), memo)   
        );
        
        memo[key] = result;
        return result;
    }
};