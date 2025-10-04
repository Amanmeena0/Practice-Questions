#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0, right = height.size()-1;
        int result = 0;
        while (left < right)
        {
            int width = right - left;
            int maxHeight = min(height[left],height[right]));
            result = max(result, width * maxHeight);
            if (height[right] < height[left])
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return result;
    }
};

int main()
{
    Solution sol;
    int result = sol;
    cout << result << endl;
    return 0;
}