class Solution {
public:
    bool doesAliceWin(string s) {
        // Check if there are any vowels in the string
        for (char c : s) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                return true;  // Alice wins if there's at least one vowel
            }
        }
        return false;  // Alice loses if there are no vowels
    }
};