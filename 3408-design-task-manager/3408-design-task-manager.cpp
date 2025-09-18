#include <bits/stdc++.h>
using namespace std;

class TaskManager {
    // taskId -> {userId, priority}
    unordered_map<int, pair<int,int>> taskMap;

    // max-heap: (priority, taskId, userId)
    priority_queue<tuple<int,int,int>> pq;

public:
    TaskManager(vector<vector<int>>& tasks) {
        for (auto &t : tasks) {
            int u = t[0], id = t[1], p = t[2];
            taskMap[id] = {u, p};
            pq.push({p, id, u});
        }
    }

    void add(int userId, int taskId, int priority) {
        taskMap[taskId] = {userId, priority};
        pq.push({priority, taskId, userId});
    }

    void edit(int taskId, int newPriority) {
        auto [userId, oldPriority] = taskMap[taskId];
        taskMap[taskId] = {userId, newPriority};
        pq.push({newPriority, taskId, userId}); // push new state
    }

    void rmv(int taskId) {
        taskMap.erase(taskId); // lazy remove (heap entry becomes invalid)
    }

    int execTop() {
        while (!pq.empty()) {
            auto [priority, taskId, userId] = pq.top();
            pq.pop();

            // validate against taskMap
            if (taskMap.count(taskId) && taskMap[taskId].second == priority) {
                taskMap.erase(taskId);
                return userId;
            }
        }
        return -1; // no valid tasks
    }
};
