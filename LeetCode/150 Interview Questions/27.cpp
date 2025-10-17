#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n = nums.size();
        int j = 0;

        for(int i =0; i < n ; i++){
            if(nums[i] != k){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

int main() {
   Solution sol;
   int result = sol;
   cout<< result << endl;
   return 0;
}