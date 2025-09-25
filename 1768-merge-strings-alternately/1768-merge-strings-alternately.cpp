class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result="";
        int length;
        if(word1.length()>=word2.length())
            length=word1.length();
        else
        length=word2.length();

        for(int i=0;i<length;i++){
            if(word1.length()>i)
                result+=word1[i];
            if(word2.length()>i)
                result+=word2[i];
            
        }
        return result;
    }
};