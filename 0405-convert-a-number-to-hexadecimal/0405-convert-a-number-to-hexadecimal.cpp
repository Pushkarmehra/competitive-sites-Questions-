class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        
        unsigned int n = num;  
        string hexChars = "0123456789abcdef";
        string result;
        
        while (n > 0) {
            int digit = n & 0xF;
            result.push_back(hexChars[digit]);
            n >>= 4; 
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};