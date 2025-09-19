#include <bits/stdc++.h>
using namespace std;

class TaskManager
{
    using p = pair<int,int>;
    unordered_map<int, p> mainMap;
    priority_queue<p> highPriority;
public:
    TaskManager(vector<vector<int>> &tasks)
    {
        for (auto &t : tasks)
        {
            int userId = t[0], taskId = t[1], priority = t[2];
            mainMap[taskId] = {priority, userId};
            highPriority.push({priority, taskId});
        }
    }

    void add(int userId, int taskId, int priority)
    {
        mainMap[taskId] = {priority, userId};
        highPriority.push({priority, taskId});
    }

    void edit(int taskId, int newPriority)
    {
        mainMap[taskId].first = newPriority;
        highPriority.push({newPriority, taskId});
    }

    void rmv(int taskId)
    {
        mainMap.erase(taskId);
    }

    int execTop()
    {
        while (!highPriority.empty())
        {
            p pii = highPriority.top();
            highPriority.pop();

            if (mainMap.count(pii.second) && mainMap[pii.second].first == pii.first)
            {
                int taskId = mainMap[pii.second].second;
                mainMap.erase(pii.second);
                return taskId;
            }
        }
        return -1;
    }
};
