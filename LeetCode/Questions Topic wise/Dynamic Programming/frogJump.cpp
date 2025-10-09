#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // simple reccurence solution
    int helper1(int ind, vector<int> &stones)
    {
        if (ind == 0)
            return 0;
        int left = helper1(ind - 1, stones) + abs(stones[ind] - stones[ind - 1]);
        int right = INT_MAX;
        if (ind > 1)
        {
            right = helper1(ind - 2, stones) + abs(stones[ind] - stones[ind - 2]);
        }
        return min(left, right);
    }
    // memoisation
    int helper(int ind, vector<int> &stones, vector<int> dp)
    {
        if (ind == 0)
            return 0;
        if (dp[ind] != -1)
            return dp[ind];
        int left = helper(ind - 1, stones, dp) + abs(stones[ind] - stones[ind - 1]);
        int right = INT_MAX;
        if (ind > 1)
            right = helper(ind - 2, stones, dp) + abs(stones[ind] - stones[ind - 2]);

        return dp[ind] = min(left, right);
    }

    // tabulation
    int helper3(int n, vector<int> &stones, vector<int> &dp)
    {
        dp[0] = 0;
        for (int i = 1; i < n; i++)
        {
            int left = dp[i - 1] + abs(stones[i] - stones[i - 1]);
            int right = INT_MAX;
            if (i > 1)
                right = dp[i - 2] + abs(stones[i] - stones[i - 2]);
            dp[i] = min(left, right);
        }
        return dp[n - 1];
    }

    int helper4(int n, vector<int> &stones)
    {
        int prev1 = 0;
        int prev2 = 0;
        for (int i = 1; i < n; i++)
        {
            int ss = prev1 + abs(stones[i] - stones[i - 1]);
            int rr = INT_MAX;
            if (i > 1)
            {
                int rr = prev2 + abs(stones[i] - stones[i - 2]);
            }

            int curr = min(ss, rr);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }

    // main function
    bool canCross(vector<int> &stones)
    {
        int n = stones.size();
        vector<int> dp(n + 1, -1);
        return (helper4(n, stones) ==  stones[n-1])? 1: 0;
    }
};

int main()
{
    Solution sol;
    vector<int> stones = {0, 1, 3, 5, 6, 8, 12, 17};
    int result = sol.canCross(stones);
    cout << result << endl;
    return 0;
}