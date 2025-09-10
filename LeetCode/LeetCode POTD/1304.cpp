#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sumZero(int n)
    {
        vector<int> ans(n);
        int index = 0;
        for (int i = 1; i <= n / 2; i++)
        {
            ans[index++] = i;
            ans[index++] = -i;
        }
        if (n % 2 != 0)
            ans[index] = 0;
        return ans;
    }
};

int main()
{

    Solution obj;

    int n = 5;

    vector<int> arr = obj.sumZero(n);

    for (int i : arr)
    {
        cout << i << endl;
    }
    return 0;
}