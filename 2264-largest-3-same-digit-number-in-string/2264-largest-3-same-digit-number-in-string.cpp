#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {
        string largest = "";

        for (int j = 0; j + 2 < (int)num.size(); j++) {
            string good = num.substr(j, 3);
            if (good[0] == good[1] && good[1] == good[2]) {
                largest = max(good, largest);
            }
        }

        return largest;
    }
};
