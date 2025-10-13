#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> results;
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0, right = n - 1;
        int top = 0, bottom = m - 1;
        while (top <= bottom && left <= right) {

            for (int i = left; i <= right; i++) {
                results.push_back(matrix[top][i]);
            }
            top++;
            for (int i = top; i <= bottom; i++) {
                results.push_back(matrix[i][right]);
            }
            right--;
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    results.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    results.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return results;
    }
};
int main() {
   Solution sol;
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
   vector<int> results = sol.spiralOrder(matrix);
   for(int i : results){

       cout<< i << " ";
   }
   return 0;
}   