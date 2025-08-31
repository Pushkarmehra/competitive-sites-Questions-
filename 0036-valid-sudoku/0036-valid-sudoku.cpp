class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Boolean arrays to track seen digits (index 0-8 for digits 1-9)
        bool rows[9][9] = {false};
        bool cols[9][9] = {false};
        bool boxes[9][9] = {false};
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                
                int num = board[i][j] - '1'; // Convert '1'-'9' to 0-8
                int boxIndex = (i / 3) * 3 + (j / 3);
                
                // Check if digit already seen
                if (rows[i][num] || cols[j][num] || boxes[boxIndex][num]) {
                    return false;
                }
                
                // Mark as seen
                rows[i][num] = true;
                cols[j][num] = true;
                boxes[boxIndex][num] = true;
            }
        }
        
        return true;
    }
};