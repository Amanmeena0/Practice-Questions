#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {

        unordered_map<int, int> freq;

        for (int i : nums)
        {
            freq[i]++;
        }
        int maxx = INT_MIN;
        int count = 0;
        
        for (auto &i : freq)
        {
            
            if (maxx < i.second)
            {
                maxx = i.second;
                count = i.second;
            }
            else if (maxx == i.second)
            {
                count += maxx;
            }
        }
        return count;
    }
};

int main()
{
    Solution sol;
    vector<int> s = {1, 2, 2, 3, 1, 4};
    int result = sol.maxFrequencyElements(s);
    cout << result << endl;
    return 0;
}