#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n = nums.size();
        int j = 0;

        for(int i =0; i < n ; i++){
            if(nums[i] != val){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

int main() {
   Solution sol;
   vector<int> nums = {3,2,2,3};
   int val = 3;
   int result = sol.removeElement(nums,val);
   cout<< result << endl;
   return 0;
}