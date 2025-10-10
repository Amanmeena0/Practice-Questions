#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> results;
        vector<int> current;
        helper(candidates, target, 0, 0, current, results);
        return results;
    }

private:
    void helper(vector<int> &candidates, int target, int index, int sum, vector<int> &current, vector<vector<int>> &results)
    {
        if (sum > target)
            return;

        if (sum == target)
        {
            results.push_back(current);
            return;
        }

        for (int i = index; i < candidates.size(); i++)
        {
            current.push_back(candidates[i]);
            helper(candidates, target, i, sum + candidates[i], current, results);
            current.pop_back();
        }
    }
};

int main()
{
    Solution sol;
    int target, n;
    cin >> target >> n;

    vector<int> candidates(n);
    for (int i = 0; i < n; i++)
    {
        cin >> candidates[i];
    }

    vector<vector<int>> result = sol.combinationSum(candidates, target);

    for (auto &comb : result)
    {
        cout << "{ ";
        for (int val : comb)
        {
            cout << val << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
