class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> result;
        for (int h = 0; h < 12; ++h) {          // hours: 0–11
            for (int m = 0; m < 60; ++m) {      // minutes: 0–59
                if (__builtin_popcount(h) + __builtin_popcount(m) == turnedOn) {
                    // format minutes with leading zero if needed
                    string time = to_string(h) + ":" + (m < 10 ? "0" : "") + to_string(m);
                    result.push_back(time);
                }
            }
        }
        return result;
    }
};
