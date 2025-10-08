class Solution {
    private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
public:
    string reverseVowels(string s) {
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(isVowel(s[i])){
            if(isVowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else{
                j--;
            }
        }
        else{
            i++;
        }
    }
    return s;
    }
};