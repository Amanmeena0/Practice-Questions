#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {
        int n = spells.size();
        int m = potions.size();
        vector<int> pairs(n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if((1LL*nums[i]*nums[j]) >= 7){
                    count++;
                }
            }
            ans[i] = count;
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    int result = sol.successfulPairs(spells,potions,success);
    cout << result << endl;
    return 0;
}