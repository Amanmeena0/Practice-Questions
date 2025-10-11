#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumEnergy(vector<int> &energy, int k)
    {
        int n = energy.size();
        int maxi = INT_MIN;
        vector<int> dp(n, 0);
        int sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            dp[i] = energy[i];
            if (i + k < n)
                dp[i] += dp[i + k];
            maxi = max(maxi, dp[i]);
        }
        return maxi;
    }
};

int main()
{
    Solution sol;
    int k = 2;
    vector<int> energy = {-2, -3, -1};
    int result = sol.maximumEnergy(energy, k);
    cout << result << endl;
    return 0;
}