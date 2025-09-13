#include <bits/stdc++.h>
using namespace std;

//first appraoch to find the anagram usign hashmap
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        unordered_map<char, int> mpp;
        
        if (s.size() != t.size())
            return false;
        for (char c : s)
        {
            mpp[c]++;
        }
        
        for (char c : t)
        {
            if (mpp.find(c) != mpp.end())
            {
                mpp[c]--;
            }
        }
        for (auto &p : mpp)
        {
            if (p.second != 0)
                return false;
        }

        return true;
    }
};

//another approach to solve this question by using array instead of hashmap
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        vector<int> count(26, 0);

        for (char c : s) {
            count[c - 'a']++;
        }
        for (char c : t) {
            count[c - 'a']--;
        }

        for (int x : count) {
            if (x != 0) return false;
        }
        return true;
    }
};

int main()
{
    Solution sol;
    string s = "anagram";
    string t = "nagaram";
    bool result = sol.isAnagram(s, t);
    cout << result << endl;
    return 0;
}