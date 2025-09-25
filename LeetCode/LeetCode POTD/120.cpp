#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumTotal(vector<vector<int>> &triangle)
    {
        int n = triangle.size();
        vector<int> dp(triangle.back());
        for(int i = n -2 ; i >= 0; i--){
            for(int j = 0; j <= i ; j++){
                dp[j] = triangle[i][j] + min(dp[j] , dp[j+1]);
            }
        }
        return dp[0];   
    }
};

int main()
{
    Solution sol;

    vector<vector<int>> triangle = {{2},{3,4},{6,5,7},{4,1,8,3}};
    
    int result = sol.minimumTotal(triangle);
    cout << result << endl;
    return 0;
}