#include <bits/stdc++.h>
using namespace std;

//brute force
class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> res(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            int count = 0;
            int v = i;
            while (v)
            {
                count += (v & 1);
                v >>= 1;
            }
            res[i] = count;
        }

        return res;
    }
};
// optimize approach
class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> res(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            res[i] = res[i >> 1] + (i & 1);
        }

        return res;
    }
};

int main()
{
    Solution sol;
    int n = 5;
    vector<int> result = sol.countBits(n);
    for (int i : result)
    {
        cout <<i  << endl;
    }
    return 0;
}