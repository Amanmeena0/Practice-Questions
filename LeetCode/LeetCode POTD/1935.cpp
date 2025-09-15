#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> broken(brokenLetters.begin(), brokenLetters.end());
        
        stringstream ss(text);
        string word;
        int count = 0;

        while (ss >> word) {
            bool canType = true;
            for (char c : word) {
                if (broken.find(c) != broken.end()) {
                    canType = false;
                    break;
                }
            }
            if (canType) count++;
        }
        return count;
    }
};

int main()
{
    Solution sol;
    string text = "hello world", brokenLetters = "ad";
    int result = sol.canBeTypedWords(text,brokenLetters);
    cout << result << endl;
    return 0;
}