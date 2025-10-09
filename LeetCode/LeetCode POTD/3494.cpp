#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        int n = skill.size(), m = mana.size();
        vector<long long> finishTime(n, 0);

        for (int j = 0; j < m; ++j) {
            finishTime[0] += 1LL * mana[j] * skill[0];

            for (int i = 1; i < n; ++i)
                finishTime[i] = max(finishTime[i], finishTime[i - 1]) + 1LL * mana[j] * skill[i];

            for (int i = n - 1; i > 0; --i)
                finishTime[i - 1] = finishTime[i] - 1LL * mana[j] * skill[i];
        }
        return finishTime[n-1];
    }
};
int main()
{
    Solution sol;
    vector<int> skill = {1, 5, 2, 4};
    vector<int> mana = {5, 1, 4, 2};
    long long result = sol.minTime(skill, mana);
    cout << result << endl;
    return 0;
}