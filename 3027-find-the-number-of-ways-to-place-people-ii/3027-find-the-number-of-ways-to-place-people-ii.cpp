class Solution {
public:
    static bool cmp(const vector<int>& p, const vector<int>& q){
        // Sort by x descending, then by y ascending
        return (p[0]==q[0]) ? p[1]<q[1] : p[0]>q[0];
    }
    
    static int numberOfPairs(vector<vector<int>>& P) {
        sort(P.begin(), P.end(), cmp);
        int n = P.size(), ans = 0;
        
        // For each point as Alice (upper-left)
        for(int i = 0; i < n-1; i++){
            int y = INT_MAX;  // Track the lowest y-coordinate of valid Bob positions
            int yi = P[i][1]; // Alice's y-coordinate
            
            // For each potential Bob position (lower-right)
            for(int j = i+1; j < n; j++){
                const int yj = P[j][1]; // Bob's y-coordinate
                
                // Valid if:
                // 1. yj >= yi: Bob's y <= Alice's y (since we want Alice upper-left)
                // 2. y > yj: No point between Alice and current Bob has lower y
                if (yj >= yi && y > yj){
                    ans++;
                    y = yj; // Update the boundary
                    if (yi == yj) break; // Same y-level, no need to continue
                }
            }
        }
        return ans;
    }
};

// Fast I/O optimization
auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();