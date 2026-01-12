class Solution {
public:
    int mySqrt(int x) {
        int left=0;
        int right=x;
       while(left<=right){
        int middle=left+(right-left)/2;
            if(pow(middle,2)>x){
                if(pow(middle-1,2)<x){
                return middle-1;}
                else{
                    right=middle-1;
                }
            }
            else if(pow(middle,2)==x){
                return middle;
            }
            else{
                left=middle+1;
            }
        }
        return x;
    }
};