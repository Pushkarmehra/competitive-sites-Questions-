// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left=1;
        int right=n;
        int middle=n;
        while(left<right){
             middle=left+(right-left)/2;
            if(isBadVersion(middle)){
                right=middle;
            }
            else{
                left=middle+1;
            }
        }
        return left;
    }
};