class Solution(object):
    def numJewelsInStones(self, J, S):
            setJ = set(J)
            return sum(s in setJ for s in S)
        