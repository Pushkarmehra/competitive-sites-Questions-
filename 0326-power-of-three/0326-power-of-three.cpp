class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        else if(n==1){
            return true;
        }
        long long result=3;
        while(1){
        if(n==result){
            return true;
        }
        else if (n<result){
            return false;
        }
            result*=3;
        }
    }
};