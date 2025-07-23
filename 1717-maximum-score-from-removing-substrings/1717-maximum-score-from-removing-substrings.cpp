class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int score = 0;
        
        if (x > y) {
            score += removeSubstring(s, "ab", x);
            score += removeSubstring(s, "ba", y);
        } else {
            score += removeSubstring(s, "ba", y);
            score += removeSubstring(s, "ab", x);
        }
        
        return score;
    }
    
private:
    int removeSubstring(string& s, string target, int points) {
        int score = 0;
        string stack = "";
        
        for (char c : s) {
            if (!stack.empty() && stack.back() == target[0] && c == target[1]) {
                stack.pop_back();
                score += points;
            } else {
                stack.push_back(c);
            }
        }
        
        s = stack;
        return score;
    }
};