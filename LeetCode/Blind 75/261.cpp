#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validTree(int n, vector<vector<int>> &edges) {
        if (edges.size() != n - 1) return false; 
        vector<vector<int>> adj = constructadj(n, edges);
        vector<bool> visited(n, false);
        if (isCycle(0, adj, visited, -1)) {
            return false;
        }
        for (bool v : visited) {
            if (!v) return false;
        }
        return true;
    }

    bool isCycle(int node, vector<vector<int>> &adj, vector<bool> &visited, int parent) {
        visited[node] = true;

        for (int neigh : adj[node]) {
            if (!visited[neigh]) {
                if (isCycle(neigh, adj, visited, node)) {
                    return true;
                }
            } else if (neigh != parent) {
                return true; 
            }
        }
        return false;
    }

    vector<vector<int>> constructadj(int n, vector<vector<int>> &edges) {
        vector<vector<int>> adj(n);
        for (auto &it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        return adj;
    }
};

int main() {
    Solution obj;
    int V = 5;
    vector<vector<int>> edges = {{0, 1}, {0, 2}, {0, 3}, {1, 2}, {3, 4}}; // Contains cycle

    if (obj.validTree(V, edges)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
