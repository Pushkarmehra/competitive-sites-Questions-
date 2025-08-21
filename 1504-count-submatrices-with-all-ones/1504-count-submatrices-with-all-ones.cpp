class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> width(m, vector<int>(n, 0));
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1) {
                    width[i][j] = (j > 0 ? width[i][j-1] : 0) + 1;
                }
            }
        }
        
        int res = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0) continue;
                
                int minWidth = width[i][j];
                for (int k = i; k >= 0 && minWidth > 0; k--) {
                    minWidth = min(minWidth, width[k][j]);
                    res += minWidth;
                }
            }
        }
        
        return res;
    }
};
