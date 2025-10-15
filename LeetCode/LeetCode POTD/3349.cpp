#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        
        // We need at least 2k elements to have two adjacent subarrays of length k
        if (n < 2 * k) return false;
        
        // Check all possible starting positions for the first subarray
        for (int i = 0; i <= n - 2 * k; i++) {
            bool firstValid = true;
            bool secondValid = true;
            
            // Check if first subarray [i, i+k-1] is strictly increasing
            for (int j = i; j < i + k - 1; j++) {
                if (nums[j] >= nums[j + 1]) {
                    firstValid = false;
                    break;
                }
            }
            
            // Check if second subarray [i+k, i+2k-1] is strictly increasing
            for (int j = i + k; j < i + 2 * k - 1; j++) {
                if (nums[j] >= nums[j + 1]) {
                    secondValid = false;
                    break;
                }
            }
            
            if (firstValid && secondValid) {
                return true;
            }
        }
        
        return false;
    }
};

int main() {
   Solution sol;
   int result = sol;
   cout<< result << endl;
   return 0;
}