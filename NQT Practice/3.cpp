#include <bits/stdc++.h>
using namespace std;

int findRowWithMaxOnes(vector<vector<int>> &matrix, int n, int m)
{
    int maxRow = -1;
    int maxCount = 0;
    
    for (int i = 0; i < n; i++)
    {
        int currentCount = 0;
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 1)
            {
                currentCount++;
            }
        }
        
        // Update only if we found a row with more 1's
        if (currentCount > maxCount)
        {
            maxCount = currentCount;
            maxRow = i;
        }
    }
    return maxRow;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
            }
        }
        
        cout << findRowWithMaxOnes(matrix, n, m) << endl;
    }
    return 0;
}