#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> avoidFlood(vector<int> &rains)
    {
        int n = rains.size();
        vector<int> ans(n, 1); // Default value for dry days
        unordered_map<int, int> lastRain; // lake -> last day it rained
        set<int> dryDays; // indices of dry days

        for (int i = 0; i < n; i++)
        {
            int lake = rains[i];

            if (lake == 0)
            {
                dryDays.insert(i); // potential dry day
            }
            else
            {
                ans[i] = -1; // raining day → mark as -1

                // If lake already has water and no previous drying
                if (lastRain.count(lake))
                {
                    // Find the first dry day after the last rain of this lake
                    auto it = dryDays.lower_bound(lastRain[lake] + 1);

                    if (it == dryDays.end())
                    {
                        // No available dry day → flood inevitable
                        return {};
                    }

                    ans[*it] = lake;     // Dry this lake on that day
                    dryDays.erase(it);   // Remove used dry day
                }

                lastRain[lake] = i; // Update last rain day for the lake
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    vector<int> rains = {1, 2, 3,4,5};  // Example input
    vector<int> result = sol.avoidFlood(rains);

    if (result.empty())
    {
        cout << "Flood inevitable" << endl;
    }
    else
    {
        for (int val : result)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}
