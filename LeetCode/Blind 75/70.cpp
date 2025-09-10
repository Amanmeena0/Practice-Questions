#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    // Bottom Up approach
    int climbstairs(int n)
    {
        if(n == 0 || n == 1)
            return 1;

        vector<int> dp(n + 1, 0);

        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }

    // Top-down approach
    int climbStairs(int n)
    {
        // step 1
        vector<int> dp(n + 1, -1);
        int ans = solve(n, dp);
        return ans;
    }

    int solve(int n, vector<int> &dp)
    {
        if (n == 0 || n == 1)
        {
            return 1;
        }
        if (dp[n] != -1)
            return dp[n];

        dp[n] = solve(n - 1, dp) + solve(n - 2, dp);

        return dp[n];
    }

    // space optimization 
    int function(int n ){
        if (n == 0 || n == 1)
            return 1;
        int prev1 = 1;
        int prev2 = 1;

        for(int curr = 2; curr <= n; curr++){
            
            int next = prev1 + prev2;
            
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;

    }
};


int main()
{
    solution obj;
    int n = 3;

    int result = obj.function(n);

    cout << result;

    return 0;
}