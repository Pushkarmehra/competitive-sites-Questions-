class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        int m = languages.size(); // number of users
        vector<unordered_set<int>> knows(m+1); 
        
        // store languages for each user in a set for quick lookup
        for (int i = 0; i < m; i++) {
            for (int lang : languages[i]) {
                knows[i+1].insert(lang);
            }
        }

        // step 1: find users involved in problematic friendships
        unordered_set<int> needTeach;
        for (auto &f : friendships) {
            int u = f[0], v = f[1];
            bool canCommunicate = false;
            for (int lang : knows[u]) {
                if (knows[v].count(lang)) {
                    canCommunicate = true;
                    break;
                }
            }
            if (!canCommunicate) {
                needTeach.insert(u);
                needTeach.insert(v);
            }
        }

        // if no problematic friendships
        if (needTeach.empty()) return 0;

        // step 2: try each language and count how many need to learn it
        int ans = INT_MAX;
        for (int lang = 1; lang <= n; lang++) {
            int count = 0;
            for (int user : needTeach) {
                if (!knows[user].count(lang)) {
                    count++;
                }
            }
            ans = min(ans, count);
        }

        return ans;
    }
};
