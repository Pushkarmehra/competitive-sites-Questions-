class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        for (int i = 0; i < s.size(); ) {
            if (s[i] == '-') {
                s.erase(i, 1);
            } 
            else {
                if (s[i] >= 'a' && s[i] <= 'z')
                    s[i] = s[i] - 32;
                i++;              }
        }
        reverse(s.begin(), s.end());
        for (int i = k; i < s.size(); i += k + 1) {
            s.insert(i, 1, '-');
        }
        reverse(s.begin(), s.end());

        return s;
    }
};