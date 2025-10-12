#include <vector>
#include <cstring>
#include <iostream>
using namespace std;


class Solution
{
    const int MOD = 1e9 + 7;
public:
    int magicalSum(int m, int k, vector<int> &nums)
    {
        int n = nums.size();

        vector<vector<long long>> C(m + 1, vector<long long>(m + 1, 0));
        for (int i = 0; i <= m; i++)
        {
            C[i][0] = C[i][i] = 1;
            for (int j = 1; j < i; j++)
            {
                C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % MOD;
            }
        }

        vector<vector<long long>> pow_val(n, vector<long long>(m + 1, 1));
        for (int i = 0; i < n; i++)
        {
            for (int cnt = 1; cnt <= m; cnt++)
            {
                pow_val[i][cnt] = (pow_val[i][cnt - 1] * nums[i]) % MOD;
            }
        }

        int maxBits = m + 1;
        int maxCarry = (m + 1) / 2 + 1;

        vector<vector<vector<long long>>> dp(
            maxBits + 1, vector<vector<long long>>(
                             maxCarry + 1, vector<long long>(m + 1, 0)));

        dp[0][0][m] = 1;

        for (int i = 0; i < n; i++)
        {
            vector<vector<vector<long long>>> new_dp(
                maxBits + 1, vector<vector<long long>>(
                                 maxCarry + 1, vector<long long>(m + 1, 0)));

            for (int bits = 0; bits <= maxBits; bits++)
            {
                for (int carry = 0; carry <= maxCarry; carry++)
                {
                    for (int remaining = 0; remaining <= m; remaining++)
                    {
                        if (dp[bits][carry][remaining] == 0)
                            continue;

                        long long ways = dp[bits][carry][remaining];

                        for (int cnt = 0; cnt <= remaining; cnt++)
                        {
                            long long comb = C[remaining][cnt];
                            long long product = pow_val[i][cnt];

                            int total = carry + cnt;
                            int new_carry = total / 2;
                            int bit = total % 2;
                            int new_bits = bits + bit;

                            if (new_bits > maxBits || new_carry > maxCarry)
                                continue;

                            int new_remaining = remaining - cnt;

                            new_dp[new_bits][new_carry][new_remaining] = (new_dp[new_bits][new_carry][new_remaining] +
                                                                          ways * comb % MOD * product % MOD) %
                                                                         MOD;
                        }
                    }
                }
            }

            dp = move(new_dp);
        }

        long long result = 0;
        for (int carry = 0; carry <= maxCarry; carry++)
        {
            result = (result + dp[k][carry][0]) % MOD;
        }

        return result;
    }
};

// Example usage
int main()
{
    Solution sol;
    int m = 5, k = 5;
    vector<int> nums = {1, 10, 100, 10000, 1000000};
    cout << sol.solve(m, k, nums) << endl; // Output: 991600007
    return 0;
}