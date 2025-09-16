class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<long long> result;
        
        for (int num : nums) {
            long long current = num;
            
            // Keep merging with the last element in result while they are non-coprime
            while (!result.empty() && gcd(result.back(), current) > 1) {
                current = lcm(result.back(), current);
                result.pop_back();
            }
            
            result.push_back(current);
        }
        
        // Convert back to vector<int>
        vector<int> answer;
        for (long long val : result) {
            answer.push_back((int)val);
        }
        
        return answer;
    }
    
private:
    long long gcd(long long a, long long b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
    
    long long lcm(long long a, long long b) {
        return a / gcd(a, b) * b;
    }
};