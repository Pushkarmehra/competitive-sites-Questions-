class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
  vector<string> result;
    result.push_back(words[0]);
    
    for (int i = 1; i < words.size(); i++) {
        string prev = result.back();
        string curr = words[i];
        
        string sortedPrev = prev;
        string sortedCurr = curr;
        sort(sortedPrev.begin(), sortedPrev.end());
        sort(sortedCurr.begin(), sortedCurr.end());
        
        if (sortedPrev != sortedCurr) {
            result.push_back(curr);
        }
    }
    return result;
}
};