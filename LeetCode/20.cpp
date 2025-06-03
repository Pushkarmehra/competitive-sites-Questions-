class Solution {
public:
    bool isValid(string s) {
        stack<char> stac;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stac.push(c);
            } else {
                if (stac.empty()) return false; // Prevents invalid access
                char top = stac.top();
                if ((c == ')' && top == '(') ||
                    (c == '}' && top == '{') ||
                    (c == ']' && top == '[')) {
                    stac.pop();
                } else {
                    return false;
                }
            }
        }
        return stac.empty();
    }
};
