class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
        for(char c : magazine) {
            mp[c]++;
        }

        for(char c : ransomNote) {
            if(mp[c] == 0) {
                return false;  
            }
            mp[c]--; 
        }

        return true;
    }
};