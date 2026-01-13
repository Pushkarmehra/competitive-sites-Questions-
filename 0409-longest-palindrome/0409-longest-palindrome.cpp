class Solution {
public:
    int longestPalindrome(string s) {
      unordered_map<char,int> mp;  
        for (char c : s) {
            mp[c]++;
        }
        int length = 0;
        bool oddFound = false;
        for (auto it : mp) {
            if (it.second % 2 == 0) {
                length += it.second;
            } else {
                length += it.second - 1;
                oddFound = true;
            }
        }
        if (oddFound) {
            length += 1;
        }

        return length;
    }
};