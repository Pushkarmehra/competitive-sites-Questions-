class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

        int ans = 0;
        int best_so_far = 0;

        for (auto &e : events) {
            int start = e[0], end = e[1], val = e[2];

            while (!pq.empty() && pq.top().first < start) {
                best_so_far = max(best_so_far, pq.top().second);
                pq.pop();
            }

            ans = max(ans, best_so_far + val);
            ans = max(ans, val);

            pq.push({end, val});
        }

        return ans;
    }
};
