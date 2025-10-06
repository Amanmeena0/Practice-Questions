#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int n;

    int swimInWater(vector<vector<int>> &grid)
    {
        n = grid.size();
        int l = grid[0][0];
        int r = n * n - 1;
        int result = r;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            vector<vector<bool>> visited(n, vector<bool>(n, false));
            if (positionsToReach(grid, 0, 0, mid, visited))
            {
                result = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return result;
    }

    bool positionsToReach(vector<vector<int>> &grid, int i, int j, int t, vector<vector<bool>> &visited)
    {
        if (i < 0 || i >= n || j < 0 || j >= n || visited[i][j] || grid[i][j] > t)
        {
            return false;
        }

        if (i == n - 1 && j == n - 1)
        {
            return true;
        }

        visited[i][j] = true;

        for (auto &dir : directions)
        {
            int i_ = i + dir[0];
            int j_ = j + dir[1];

            if (positionsToReach(grid, i_, j_, t, visited))
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> grid = {{0, 2}, {1, 3}};
    int result = sol.swimInWater(grid);
    cout << result << endl;
    return 0;
}
