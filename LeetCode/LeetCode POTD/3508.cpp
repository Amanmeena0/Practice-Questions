#include <bits/stdc++.h>
using namespace std;

class Router
{
public:
    deque<vector<int>> q;
    set<vector<int>> packets;
    unordered_map<int, int> removePacketsFromDestination;
    unordered_map<int, vector<int>> pd;
    int size = 0;
    Router(int memoryLimit)
    {
        size = memoryLimit;
    }

    bool addPacket(int source, int destination, int timestamp)
    {
        if (packets.find({source, destination, timestamp}) != packets.end())
        {
            return false;
        }
        if (q.size() > 0)
        {
            if (limit == q.size())
            {
                vector<int> p = q.front();
                packets.erase(p);
                removePacketsFromDestination[p[1]]++;
                q.pop();
            }
        }
        q.push({source, destination, timestamp});
        packets.insert({source, destination, timestamp});
        pd[destination].push_back(timestamp);
        return true;
    }

    vector<int> forwardPacket()
    {
        if (q.size() > 0)
        {
            vector<int> p = q.front();
            packets.erase(p);
            removePacketsFromDestination[p[1]]++;
            q.pop();
            return p;
        }
        return [];
    }

    int getCount(int destination, int startTime, int endTime)
    {
        if (pd.find(destination) == pd.end())
            return 0;

        int x = removePacketsFromDestination[destination];

        auto it = lower_bound(pd[destination].begin() + x, pd[destination].end(), startTime);
        auto it2 = upper_bound(pd[destination].begin() + x, pd[destination].end(), endTime);

        return int(it2 - it);
    }
