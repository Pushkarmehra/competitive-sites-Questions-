#include <queue>
#include <string>
using namespace std;

class Solution {
public:
    string makeFancyString(string s) {
        if (s.empty()) return s;
        
        queue<char> qu;
        string result;
        char prev;
        int count = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (i == 0) {
                qu.push(s[0]);
                prev = s[0];
                count = 1;
            } else {
                if (prev == s[i]) {
                    count++;
                    if (count <= 2) { 
                        qu.push(s[i]);
                    }
                } else {
                    count = 1; 
                    prev = s[i]; 
                    qu.push(s[i]); 
                }
            }
        }
        while (!qu.empty()) { 
            result += qu.front(); 
            qu.pop();
        }
        
        return result;
    }
};