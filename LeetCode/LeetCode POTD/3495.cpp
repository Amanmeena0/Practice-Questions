#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long minOperations(vector<vector<int>> &queries)
    {
        long long res = 0;
        for (auto &q : queries)
        {
            int l = q[0];
            int r = q[1];

            long long steps = solve(l, r);

            res += (steps + 1) / 2;
        }
        return res;
    }
    long long solve(int l, int r)
    {
        long long L = 1;
        long long S = 1;
        long long steps = 0;

        while (L <= r)
        {
            long long R = 4 * L - 1;

            long long start = max(L, (long long)l);
            long long end = min(R, (long long)r);

            if (start <= end)
            {
                steps += (end - start + 1) * S;
            }
            S += 1;
            L = L * 4;
        }
        return steps;
    }
};

int main()
{
    Solution obj;
    vector<vector<int>> queries = {{1,2},{2,4}};

    int result = obj.minOperations(queries);

    cout<<result;

    return 0;
}