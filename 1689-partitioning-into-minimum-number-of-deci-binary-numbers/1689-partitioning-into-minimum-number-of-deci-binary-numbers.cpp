class Solution {
public:
    int minPartitions(string n) {
        if(n.size()<0){
            return 0;
        }
        char max='0';
        for(int i=0;i<n.size();i++){
            if(max<n[i])
            max=n[i];
        }
        int result=max-'0';
        return result;
    }
};