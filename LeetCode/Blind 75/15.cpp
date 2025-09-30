#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> triplets;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {
            // Skip duplicate i
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1, right = n - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    triplets.push_back({nums[i], nums[left], nums[right]});

                    // Skip duplicates for left & right
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                } 
                else if (sum < 0) {
                    left++;
                } 
                else {
                    right--;
                }
            }
        }
        return triplets;
    }
};

int main()
{
   Solution sol;
   vector<int> nums = {-1, 0, 1, 2, -1, -4};
   vector<vector<int>> result = sol.threeSum(nums);

   for (int i = 0; i < result.size(); i++)
   {
      cout << "{ ";
      for (int j = 0; j < result[i].size(); j++)
      {
         cout << result[i][j] << " ";
      }
      cout << "}" << endl;
   }
   return 0;
}