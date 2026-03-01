class Solution {
public:
    int minPartitions(string n) {
        char maxDigit = '0';
        
        for(int i = 0; i < n.size(); i++){
            if(maxDigit < n[i]){
                maxDigit = n[i];
            }
        }
        
        return maxDigit - '0';
    }
};