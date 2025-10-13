#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Maxsum = INT_MIN;
        int sum = 0;
        for(int num : nums){
            sum = max(num,sum+num);
            Maxsum = max(Maxsum,sum);
        }
        return Maxsum;
    }
};

int main()
{
    Solution sol;
    vector<int> nums  = {-2,1,-3,4,-1,2,1,-5,4};
    int result = sol.maxSubArray(nums);
    cout << result << endl;
    return 0;
}