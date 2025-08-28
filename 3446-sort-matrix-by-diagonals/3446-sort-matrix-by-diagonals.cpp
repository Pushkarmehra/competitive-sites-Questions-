class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        
        // Process bottom-left triangle diagonals (including main diagonal)
        for (int d = 0; d < n; d++) {
            vector<int> diagonal;
            
            // Collect diagonal elements
            for (int i = d; i < n; i++) {
                diagonal.push_back(grid[i][i - d]);
            }
            
            // Sort in non-increasing order
            sort(diagonal.rbegin(), diagonal.rend());
            
            // Put back sorted elements
            for (int i = d, k = 0; i < n; i++, k++) {
                grid[i][i - d] = diagonal[k];
            }
        }
        
        // Process top-right triangle diagonals
        for (int d = 1; d < n; d++) {
            vector<int> diagonal;
            
            // Collect diagonal elements
            for (int j = d; j < n; j++) {
                diagonal.push_back(grid[j - d][j]);
            }
            
            // Sort in non-decreasing order
            sort(diagonal.begin(), diagonal.end());
            
            // Put back sorted elements
            for (int j = d, k = 0; j < n; j++, k++) {
                grid[j - d][j] = diagonal[k];
            }
        }
        
        return grid;
    }
};