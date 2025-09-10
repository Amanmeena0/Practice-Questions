#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int ans = 0;
        int buyPrice = prices[0];
        int n = prices.size();

        for (int i = 1; i < n; i++)
        {
            if (buyPrice > prices[i])
            {
                buyPrice = prices[i];
            }

            ans = max(ans, prices[i] - buyPrice);
        }
        return ans;
    }
};

int main()
{
    Solution obj;

    vector<int> prices = {7, 6, 4, 3, 1};

    int result = obj.maxProfit(prices);

    cout << result;

    return 0;
}