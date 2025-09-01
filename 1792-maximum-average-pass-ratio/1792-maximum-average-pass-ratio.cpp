class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        // Priority queue to store the gain in pass ratio for each class
        // We use max heap to get the class with maximum gain first
        priority_queue<pair<double, pair<int, int>>> pq;
        
        // Calculate initial gain for each class and add to priority queue
        for (auto& cls : classes) {
            int pass = cls[0];
            int total = cls[1];
            double gain = calculateGain(pass, total);
            pq.push({gain, {pass, total}});
        }
        
        // Assign each extra student to the class that gives maximum gain
        for (int i = 0; i < extraStudents; i++) {
            auto top = pq.top();
            pq.pop();
            
            double currentGain = top.first;
            int pass = top.second.first;
            int total = top.second.second;
            
            // Add one student (both pass and total increase by 1)
            pass++;
            total++;
            
            // Calculate new gain and push back to queue
            double newGain = calculateGain(pass, total);
            pq.push({newGain, {pass, total}});
        }
        
        // Calculate the final average pass ratio
        double totalRatio = 0.0;
        int numClasses = pq.size();
        
        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            
            int pass = top.second.first;
            int total = top.second.second;
            
            totalRatio += (double)pass / total;
        }
        
        return totalRatio / numClasses;
    }
    
private:
    // Calculate the gain in pass ratio if we add one student to this class
    double calculateGain(int pass, int total) {
        double currentRatio = (double)pass / total;
        double newRatio = (double)(pass + 1) / (total + 1);
        return newRatio - currentRatio;
    }
};