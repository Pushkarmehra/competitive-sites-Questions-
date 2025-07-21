#include <string>
using namespace std;

class Solution {
public:
    string makeFancyString(string s) {
        string result;
        result.push_back(s[0]);
        int freq =1;
    for(int i=1;i<s.size();i++){
        if(result.back()==s[i]){
            result.push_back(s[i]);
            freq++;
            if(freq==3){
                result.pop_back();
                freq--;
            }
        }
        else{
            freq=1;
            result.push_back(s[i]);
        }
    }
    return result;
    }
};