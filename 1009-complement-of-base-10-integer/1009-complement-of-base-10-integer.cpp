class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        
        int mask=0;
        int temp=n;
        
        while(temp){
            mask=(mask<<1)|1;
            temp>>=1;
        }
        
        return n^mask;
    }
};