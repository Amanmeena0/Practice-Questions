#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int triangularSum(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> newNums(n - 1);
        while(n > 1)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (n == 1)
                    return nums[0];
                newNums[j] = (nums[j] + nums[j + 1]) % 10;
            }
            nums = newNums;
            n--;
        }
        return nums[0];
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5};
    int result = sol.triangularSum(nums);
    cout << result << endl;
    return 0;
}