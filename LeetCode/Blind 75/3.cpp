#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        int subSize = 0;
        for (int i = 0; i < n; i++)
        {
            unordered_set<char> visited;

            for (int j = i; j < n; j++)
            {
                if (visited.find(s[j]) != visited.end())
                {
                    break;
                }
                visited.insert(s[j]);
                subSize = max(subSize, j - i + 1);
            }
        }

        return subSize;
    }
};

int main()
{
    Solution sol;
    string s = "pwwkew";
    int result = sol.lengthOfLongestSubstring(s);
    cout << result << endl;  // Expected: 3
    return 0;
}
