#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left= 0, right = height.size()-1;
        int result = 0;
        while(left < right){
            int width = right - left;
            int h = min(height[right],height[left]);
            result = max(result , width*h);

            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }
        return result;
    }
};

int main() {
   Solution sol;
   vector<int> arr = {1,8,6,2,5,4,8,3,7};
   int result = sol.maxArea(arr);
   cout<< result << endl;
   return 0;
}