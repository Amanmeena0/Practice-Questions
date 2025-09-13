#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> visited;

        for(int i : nums){
            if(visited[i]) return true;
            visited[i]++;
        }
        return false;
    }
};
int main() {
   Solution sol;
   vector<int> nums = {1,2,3,1};
   bool result = sol.containsDuplicate(nums);
   cout << "Result:"<< result << endl;
   return 0;
}