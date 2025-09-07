class Solution {
public:
    long long minOperations(vector<vector<int>>& queries) {
        long long totalOps = 0;
        
        for (auto& query : queries) {
            int l = query[0];
            int r = query[1];
            totalOps += solve(l, r);
        }
        
        return totalOps;
    }
    
private:
    long long solve(int l, int r) {
        // For each number, calculate how many times it needs to be divided by 4 to become 0
        vector<int> operations;
        
        for (int num = l; num <= r; num++) {
            operations.push_back(getOperationsNeeded(num));
        }
        
        // Sort in descending order - we want to handle numbers needing more operations first
        sort(operations.begin(), operations.end(), greater<int>());
        
        long long totalOps = 0;
        
        // Use a priority queue to simulate the process
        priority_queue<int> pq;
        for (int ops : operations) {
            pq.push(ops);
        }
        
        // Keep pairing elements and reducing their operation count
        while (pq.size() > 1) {
            int first = pq.top(); pq.pop();
            int second = pq.top(); pq.pop();
            
            if (first > 0) {
                totalOps++;
                if (first - 1 > 0) pq.push(first - 1);
                if (second - 1 > 0) pq.push(second - 1);
            }
        }
        
        // Handle remaining single element
        if (!pq.empty() && pq.top() > 0) {
            // This shouldn't happen in optimal solution since we need pairs
            // But if it does, we need pq.top() more operations
            totalOps += pq.top();
        }
        
        return totalOps;
    }
    
    // Calculate how many operations needed to reduce num to 0
    int getOperationsNeeded(int num) {
        if (num == 0) return 0;
        
        int ops = 0;
        while (num > 0) {
            num /= 4;
            ops++;
        }
        return ops;
    }
};
