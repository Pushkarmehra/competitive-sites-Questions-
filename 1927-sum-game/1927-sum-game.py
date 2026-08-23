class Solution:
    def sumGame(self, num: str) -> bool:
        n = len(num)
        sumL = sumR = qL = qR = 0

        for i in range(n):
            if i < n // 2:
                if num[i] == '?':
                    qL += 1
                else:
                    sumL += int(num[i])
            else:
                if num[i] == '?':
                    qR += 1
                else:
                    sumR += int(num[i])

        # Case 1: string only contains digits
        if qL + qR == 0:
            return sumL != sumR

        # Case 2: odd no. of '?'
        if (qL + qR) % 2:
            return True

        # Case 3: even no. of '?'
        # 3a:
        if qL == qR:
            return sumL != sumR

        # 3b: 
        return 2 * (sumL - sumR) != 9 * (qR - qL)