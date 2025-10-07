#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> avoidFlood(vector<int> &rains)
    {
        int n = rains.size();
        vector<int> ans(n, 1);
        unordered_map<int, int> mpp; // lake -> last day it rained
        set<int> dryDays;            // indices of days available for drying

        for (int i = 0; i < n; i++)
        {
            int lake = rains[i];

            if (lake == 0)
            {
                dryDays.insert(i); // store index of dry day
            }
            else
            {
                ans[i] = -1; // raining day
                
                if (mpp.count(lake))
                {
                    auto it = dryDays.lower_bound(mpp[lake] + 1);
                    if (it == dryDays.end())
                    {
                        // flood cannot be avoided
                        return {};
                    }

                    ans[*it] = lake;   // dry this lake on that dry day
                    dryDays.erase(it); // remove that dry day
                }

                mpp[lake] = i; // update last rain day for this lake
            }
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    // Sample Input: rains array
    vector<int> rains = {1, 2, 0, 1, 2};

    vector<int> result = sol.avoidFlood(rains);

    if (result.empty())
    {
        cout << "Flood cannot be avoided." << endl;
    }
    else
    {
        cout << "Output: ";
        for (int val : result)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}
