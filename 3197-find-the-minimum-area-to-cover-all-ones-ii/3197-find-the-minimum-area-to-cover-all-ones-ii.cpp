class Solution {
public:
    int minimumSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int result = INT_MAX;
        
        // Try all possible ways to divide the grid into 3 rectangles
        
        // Case 1: Three horizontal strips
        for (int i1 = 0; i1 < m - 2; i1++) {
            for (int i2 = i1 + 1; i2 < m - 1; i2++) {
                int area1 = getRectangleArea(grid, 0, i1, 0, n - 1);
                int area2 = getRectangleArea(grid, i1 + 1, i2, 0, n - 1);
                int area3 = getRectangleArea(grid, i2 + 1, m - 1, 0, n - 1);
                result = min(result, area1 + area2 + area3);
            }
        }
        
        // Case 2: Three vertical strips
        for (int j1 = 0; j1 < n - 2; j1++) {
            for (int j2 = j1 + 1; j2 < n - 1; j2++) {
                int area1 = getRectangleArea(grid, 0, m - 1, 0, j1);
                int area2 = getRectangleArea(grid, 0, m - 1, j1 + 1, j2);
                int area3 = getRectangleArea(grid, 0, m - 1, j2 + 1, n - 1);
                result = min(result, area1 + area2 + area3);
            }
        }
        
        // Case 3: One rectangle on top, two on bottom
        for (int i = 0; i < m - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                int area1 = getRectangleArea(grid, 0, i, 0, n - 1);
                int area2 = getRectangleArea(grid, i + 1, m - 1, 0, j);
                int area3 = getRectangleArea(grid, i + 1, m - 1, j + 1, n - 1);
                result = min(result, area1 + area2 + area3);
            }
        }
        
        // Case 4: One rectangle on bottom, two on top
        for (int i = 0; i < m - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                int area1 = getRectangleArea(grid, 0, i, 0, j);
                int area2 = getRectangleArea(grid, 0, i, j + 1, n - 1);
                int area3 = getRectangleArea(grid, i + 1, m - 1, 0, n - 1);
                result = min(result, area1 + area2 + area3);
            }
        }
        
        // Case 5: One rectangle on left, two on right
        for (int j = 0; j < n - 1; j++) {
            for (int i = 0; i < m - 1; i++) {
                int area1 = getRectangleArea(grid, 0, m - 1, 0, j);
                int area2 = getRectangleArea(grid, 0, i, j + 1, n - 1);
                int area3 = getRectangleArea(grid, i + 1, m - 1, j + 1, n - 1);
                result = min(result, area1 + area2 + area3);
            }
        }
        
        // Case 6: One rectangle on right, two on left
        for (int j = 0; j < n - 1; j++) {
            for (int i = 0; i < m - 1; i++) {
                int area1 = getRectangleArea(grid, 0, i, 0, j);
                int area2 = getRectangleArea(grid, i + 1, m - 1, 0, j);
                int area3 = getRectangleArea(grid, 0, m - 1, j + 1, n - 1);
                result = min(result, area1 + area2 + area3);
            }
        }
        
        return result;
    }
    
private:
    // Calculate minimum rectangle area needed to cover all 1's in given region
    int getRectangleArea(vector<vector<int>>& grid, int r1, int r2, int c1, int c2) {
        int minRow = r2 + 1, maxRow = r1 - 1;
        int minCol = c2 + 1, maxCol = c1 - 1;
        
        // Find bounding box of all 1's in this region
        for (int i = r1; i <= r2; i++) {
            for (int j = c1; j <= c2; j++) {
                if (grid[i][j] == 1) {
                    minRow = min(minRow, i);
                    maxRow = max(maxRow, i);
                    minCol = min(minCol, j);
                    maxCol = max(maxCol, j);
                }
            }
        }
        
        // If no 1's found in this region, return 0
        if (minRow > maxRow || minCol > maxCol) {
            return 0;
        }
        
        return (maxRow - minRow + 1) * (maxCol - minCol + 1);
    }
};