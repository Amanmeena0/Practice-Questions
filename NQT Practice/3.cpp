#include <bits/stdc++.h>
using namespace std;

int countOnes(vector<vector<int>> &matrz, int n, int m)
{
    int row = 0;
    unordered_map<int, int> mpp;
    int maxOne = 0;
    for (int i = 0; i < n; i++)
    {
        int maxONE = 0;
        for (int j = 0; j < m; j++)
        {
            if (matrz[i][j] == 1)
            {
                maxONE++;
            }
        }
        if (maxONE > maxOne)
        {
            maxOne = maxONE;
            row = i;
        }
    }
    return row;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // code here
        int n;
        cin >> n; int m;
        cin >> m;
        vector<vector<int>> matrz(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> matrz[i][j];
            }
        }

        cout << countOnes(matrz, n, m) << endl;
    }
    return 0;
}