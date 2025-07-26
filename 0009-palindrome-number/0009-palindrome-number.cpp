class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long long result=0;
        if(x<0){
            return false;
        }
        else{
            while(temp!=0){
                result=(result*10)+temp%10;
                temp=temp/10;
            }
            if(result==x){
                return true ;
            }
            else{
                return false;
            }
        }
    }
};