#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long solve(int i, unordered_map<int, int> &mpp, vector<int> &v, vector<long long int> &dp)
    {
        int n = v.size();
        if (i >= n)
        {
            return 0;
        }
        if (dp[i] != -1)
        {
            return dp[i];
        }

        auto it = lower_bound(v.begin(), v.end(), v[i] + 3);
        int index = it - v.begin();
        long long int pick = v[i] * 1LL * mpp[v[i]] + solve(index, mpp, v, dp);

        long long int skip = solve(i + 1, mpp, v, dp);

        return dp[i] = max(skip, pick);
    }
    long long maximumTotalDamage(vector<int> &power)
    {
        unordered_map<int, int> mpp;

        for (int i : power)
        {
            mpp[i]++;
        }

        vector<int> v;
        for (auto it : mpp)
        {
            v.push_back(it.first);
        }

        sort(v.begin(), v.end());

        int n = v.size();
        vector<long long int> dp(n, -1);

        return solve(0, mpp, v, dp);
    }
};

int main()
{
    Solution sol;
    int n;
    cin >> n;
    vector<int> power(n);
    for (int i = 0; i < n; i++)
    {
        cin >> power[i];
    }
    int result = sol.maximumTotalDamage(power);
    cout << result << endl;
    return 0;
}