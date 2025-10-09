#include <bits/stdc++.h>
using namespace std;

// recursion
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

// memoisation
int fibMemo(int n)
{
    if (n <= 1)
        return n;
    vector<int> dp(n + 1, -1);
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = fib(n - 1) + fib(n - 2);
}

// tabulations
int fibTabu(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

// space optimization
int fibSpace(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int prev1 = 0;
    int prev2 = 1;

    for (int i = 2; i <= n; i++)
    {
        int curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }
    return prev2;
}
int main()
{
    int n;
    cin >> n;
    int result = fibMemo(n);
    int result1 = fib(n);
    int result2 = fibTabu(n);
    int result3 = fibSpace(n);
    cout << result << " and " << result1 << " and " << result2 << " and " << result3 << endl;
    return 0;
}