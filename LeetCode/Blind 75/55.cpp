#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        int n = nums.size();
        int goal = n - 1;

        for(int i = n - 1; i > -1 ; i--){
            int max_jump = nums[i];
            if(i + max_jump >= goal){
                goal  = i;
            }
        }
        if(goal == 0){
            return true;
        }else{
            return false;
        }

    }
};

int main()
{
    Solution sol;
    vector<int> nums = {2, 3, 1, 1, 4};
    bool result = sol.canJump(nums);
    cout << result << endl;
    return 0;
}