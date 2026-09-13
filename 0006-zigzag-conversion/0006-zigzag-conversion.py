class Solution:
    def convert(self, s: str, numRows: int) -> str:
        # Base case: single row or string is shorter than rows
        if numRows == 1 or numRows >= len(s):
            return s
            
        rows = [[] for _ in range(numRows)]
        curr_row = 0
        step = 1
        
        for char in s:
            rows[curr_row].append(char)
            # Reverse direction at boundaries
            if curr_row == 0:
                step = 1
            elif curr_row == numRows - 1:
                step = -1
            curr_row += step
            
        return "".join("".join(row) for row in rows)