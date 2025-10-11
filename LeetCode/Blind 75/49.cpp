#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        int n = strs.size();

        vector<vector<string>> results;
        unordered_map<string, vector<string>> mpp;
        for (int i = 0; i < n; i++)
        {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            mpp[temp].push_back(strs[i]);
        }

        for (auto it : mpp)
        {
            results.push_back(it.second);
        }
        return results;
    }
};

int main()
{
    Solution sol;
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = sol.groupAnagrams(strs);
    for (int i = 0; i < result.size(); i++)
    {
        cout<<"{";
        for (int j = 0; j < result[i].size(); j++)
        {

            cout << result[i][j] << ",";
        }
        cout<<"}"<<endl;
    }
    return 0;
}