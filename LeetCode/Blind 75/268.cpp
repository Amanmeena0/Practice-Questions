#include <bits/stdc++.h>
using namespace std;

// brute force
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (nums[i] != i) {
                return i;
            }
        }        
        return n;
    }
};

//optimal approach
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = n;
        
        // After sorting, nums should be [0,1,2,...,n] with one missing
        for (int i = 0; i < n; i++) {
            ans ^= i ^ nums[i];
        }
        
        // If all indices matched, missing number is n
        return ans;
    }
};


int main() {
   Solution sol;
   vector<int> nums = {3,0,1};

   int result = sol.missingNumber(nums);

   cout<< result << endl;
   return 0;
}