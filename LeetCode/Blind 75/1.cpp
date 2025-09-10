#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> mpp;

        for(int i = 0;i<n;i++){
            int compliement = target - nums[i];
            if(mpp.count(compliement)){
                return {mpp[compliement],i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};
int main(){
    Solution o;
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> result = o.twoSum(nums,target);

    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }

    return 0;
}