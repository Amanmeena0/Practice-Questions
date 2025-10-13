#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> removeAnagrams(vector<string> &words)
    {
        vector<string> results;
        results.push_back(words[0]);

        for (int i = 1; i < words.size(); i++)
        {
            string prev = results.back();
            string curr = words[i];

            sort(prev.begin(), prev.end());
            sort(curr.begin(), curr.end());

            if (prev != curr)
            {
                results.push_back(words[i]);
            }
        }
        return results;
    }
};

int main()
{
    Solution sol;
    vector<string> words = {"abba", "baba", "bbaa", "cd", "cd"};
    vector<string> results = sol.removeAnagrams(words);
    for (string result : results)
    {

        cout << result << endl;
    }
    return 0;
}