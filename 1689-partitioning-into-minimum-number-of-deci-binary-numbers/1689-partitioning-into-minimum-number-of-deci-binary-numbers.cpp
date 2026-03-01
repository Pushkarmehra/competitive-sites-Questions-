class Solution {
public:
    int minPartitions(string n) {
        sort(n.begin(),n.end());
        int max=n[n.size()-1]-'0';
        return max;
    }
};