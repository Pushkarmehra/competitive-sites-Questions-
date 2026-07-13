class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        s = set()
        code = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]

        for i in words:
            l = ""
            for j in i:
                l += code[ord(j)-97]
            s.add(l)
        return len(s)