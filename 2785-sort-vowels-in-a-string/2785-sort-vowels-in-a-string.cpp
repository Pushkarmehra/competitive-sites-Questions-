class Solution {
public:
    string sortVowels(string s) {
        // Helper function to check if a character is a vowel
        auto isVowel = [](char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                   c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
        };
        
        // Extract all vowels from the string
        vector<char> vowels;
        for (char c : s) {
            if (isVowel(c)) {
                vowels.push_back(c);
            }
        }
        
        // Sort vowels by ASCII value (default sort does this)
        sort(vowels.begin(), vowels.end());
        
        // Reconstruct the string by placing sorted vowels back
        string result = s;
        int vowelIndex = 0;
        
        for (int i = 0; i < result.length(); i++) {
            if (isVowel(result[i])) {
                result[i] = vowels[vowelIndex++];
            }
        }
        
        return result;
    }
};