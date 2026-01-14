class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) return false;
        int sum=1;
        int X=sqrt(num);
        for(int i=2;i<=X;i++){
              if (num % i == 0) {
                sum += i;
                if (i != num / i)
                    sum += num / i;
            }
        }
        if(sum==num){
        return true;}
        return false;
    }
};