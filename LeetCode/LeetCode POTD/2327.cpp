#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    const int MOD = 1e9 + 7;
    int peopleAwareOfSecret(int n, int delay, int forget)
    {
        vector<int> t(n + 1, 0);

        t[1] = 1;

        int count = 0;

        for (int day = 2; day <= n; day++)
        {
            if (day - delay > 0)
            {
                count = (count + t[day - delay]) % MOD;
            }
            if (day - forget > 0)
            {
                count = (count - t[day - forget] + MOD) % MOD;
            }
            t[day] = count;
        }

        int result = 0;
        for (int day = n - forget + 1; day <= n; day++)
        {
            if (day > 0)
            {
                result = (result + t[day]) % MOD;
            }
        }
        return result;
    }
};

int main()
{
    Solution obj;

    int n = 6;
    int delay = 2;
    int forget = 4;

    long long ans = obj.peopleAwareOfSecret(n, delay, forget);

    cout << ans;

    return 0;
}