class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            int count=0;
            int tempsum=0;
            int j=1;
            int root = sqrt(nums[i]);
            while (j <= root) {
                if (nums[i] % j ==0  ) {
                     if (j ==  nums[i]/ j) {
                        tempsum += j;
                        count += 1;
                         if (count>4){
                        break;
                    }
                    } 
                    else{
                    tempsum += j; 
                    tempsum += nums[i]/j;  
                    count+=2;
                     if (count>4){
                        break;
                    }
                    }

                }
                j++;
            }

            if (count == 4) {
                sum += tempsum; 
            }
        }
        return sum;
    }
};
