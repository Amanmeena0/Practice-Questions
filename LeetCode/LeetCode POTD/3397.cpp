#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxDistinctElements(vector<int> &nums, int k)
    {
        int n = nums.size();

        sort(nums.begin(), nums.end());
        int cnt = 0;
        long long prev = 0;

        for (int i = 0; i < n; i++)
        {
            long long curr = max((long long)nums[i] - k, prev + 1);

            if (curr <= (long long)nums[i] + k)
            {
                cnt++;
                prev = curr;
            }
        }

        return cnt;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {4,4,4,4};
    int k = 1;
    int result = sol.maxDistinctElements(nums,k);
    cout << result << endl;
    return 0;
}