#include <queue>
#include <string>
using namespace std;

class Solution {
public:
    string makeFancyString(string s) {
        if (s.empty()) return s;
        
        string result;
        char prev = s[0];
        int count = 1;
        result += s[0];
        
        for (int i = 1; i < s.size(); i++) {
            if (prev == s[i]) {
                count++;
                if (count < 3) { 
                    result += s[i];
                }
            } else {
                count = 1;  
                result += s[i];
                prev = s[i];  
            }
        }
        
        return result;
    }
};