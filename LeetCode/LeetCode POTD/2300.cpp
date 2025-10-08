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

        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < m; j++)
            {
                long long product = spells[i] * potions[j];

                if (product >= success)
                {
                    count++;
                }

                cout << "count :" << i << "is" << count << endl;
            }
            pairs[i] = count;
        }
        return pairs;
    }
};

class Solution
{
public:
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {

        sort(potions.begin(), potions.end());
        int m = potions.size();
        vector<int> ans;
        for (int spell : spells)
        {
            long long int target = success / spell;
            if (target * spell <     success)
                target++;

            auto it = lower_bound(poitions.begin(), poitions.end(), target);
            if (it != potions.end())
            {
                int index = it - potions.begin();
                ans.push_back(m - index);
            }else{
                ans.push_back(0);
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> spells = {5, 1, 3};
    vector<int> potions = {1, 2, 3, 4, 5};
    long long success = 7;
    vector<int> result = sol.successfulPairs(spells, potions, success);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}