class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector<int> targetCount = getDigitCount(n);
        for (int i = 0; i <= 30; i++) {
            long long powerOf2 = 1LL << i; 
            if (powerOf2 > 1e9) break;
            
            vector<int> powerCount = getDigitCount(powerOf2);
            if (targetCount == powerCount) {
                return true;
            }
        }
        
        return false;
    }
    
private:
    vector<int> getDigitCount(long long num) {
        vector<int> count(10, 0);
        while (num > 0) {
            count[num % 10]++;
            num /= 10;
        }
        return count;
    }
};