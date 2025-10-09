#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 1 || n == 0)
            return 1;

        int left = climbStairs(n - 1);
        int right = climbStairs(n - 2);

        return left + right;
    }

    int climbStairs1(int n) {

        vector<int> dp(n + 1, -1);
        return helper(n, dp);
    }
    int helper(int n, vector<int>& dp) {
        if (n == 1 || n == 0)
            return 1;

        if (dp[n] != -1)
            return dp[n];
        return dp[n] = helper(n - 1, dp) + helper(n - 2, dp);
    }
    int climbStairs2(int n)
    {
        if (n == 1 || n == 0)
            return 1;

        vector<int> dp(n + 1, -1);
        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};

int main()
{
    Solution sol;
    int n;
    cin >> n;
    int result = sol.climbStairs(n);
    int result1 = sol.climbStairs1(n);
    int result2 = sol.climbStairs2(n);
    cout << result << " and " << result1 << " and " << result2 << endl;
    return 0;
}