// 3025 & 3027 have same solution

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfPairs(vector<vector<int>> &points)
    {
        int n = points.size();
        auto lambda = [](vector<int> &points1, vector<int> &points2)
        {
            if (points1[0] == points2[0])
            {
                return points1[1] > points2[1];
            }
            return points1[0] < points2[0];
        };
        sort(points.begin(), points.end(), lambda);
        int result = 0;

        for (int i = 0; i < n; i++)
        {
            int x1 = points[i][0];
            int y1 = points[i][1];
            int besty = INT_MIN;
            for (int j = i + 1; j < n; j++)
            {
                int x2 = points[j][0];
                int y2 = points[j][1];

                if (y2 > y1)
                    continue;

                if (y2 > besty)
                {
                    result++;
                    besty = y2;
                }
            }
        }
        return result;
    }
};

int main()
{
    Solution obj;

    vector<vector<int>> points = {{6, 2}, {4, 4}, {2, 6}};

    int result = obj.numberOfPairs(points);

    cout << result;

    return 0;
}