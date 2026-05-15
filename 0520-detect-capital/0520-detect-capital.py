class Solution(object):
    def detectCapitalUse(self, word):
        capital_count=0 
        for ch in word:
            if ch.isupper():
                capital_count+=1

        if capital_count == len(word):
            return True
            
        if capital_count == 0:
            return True 

        if capital_count == 1 and word[0].isupper():
            return True
        return False