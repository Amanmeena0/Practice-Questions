#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string longest = "";

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                string subs = s.substr(i, j - i + 1);
                if (isPalindrome(subs) && subs.size() > longest.size()) {
                    longest = subs;
                }
            }
        }
        return longest;
    }

    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";

        vector<vector<bool>> dp(n, vector<bool>(n, false));
        string longest = "";

        for (int len = 1; len <= n; len++) {
            for (int i = 0; i + len - 1 < n; i++) {
                int j = i + len - 1;

                if (len == 1) {
                    dp[i][j] = true;
                } 
                else if (len == 2) {
                    dp[i][j] = (s[i] == s[j]);
                } 
                else {
                    dp[i][j] = (s[i] == s[j]) && dp[i+1][j-1];
                }

                if (dp[i][j] && len > longest.size()) {
                    longest = s.substr(i, len);
                }
            }
        }

        return longest;
    }
};

int main() {
    Solution sol;
    string s = "babad";
    string result = sol.longestPalindrome(s);
    cout << result << endl;
    return 0;
}
