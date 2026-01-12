class Solution {
public:
    int mySqrt(int x) {
        for(int i=0;i<=x;i++){
            if(pow(i,2)>x){
                return i-1;
            }
            else if(pow(i,2)==x){
                return i;
            }
        }
        return x;
    }
};
