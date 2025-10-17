#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxPartitionsAfterOperations(const string &s, int k) {
        int n = (int)s.length();
        if (k == 26) return 1;

        // left[i] = {segments for prefix s[0..i-1], mask of last segment}
        vector<pair<int,int>> left(n + 1, {0,0});
        int count = 1, mask = 0;
        for (int i = 0; i < n; ++i) {
            int num = s[i] - 'a';
            if ((mask >> num) & 1) {
                left[i + 1] = {count, mask};
                continue;
            }
            if (__builtin_popcount(mask) == k) {
                ++count;
                mask = (1 << num);
            } else {
                mask |= (1 << num);
            }
            left[i + 1] = {count, mask};
        }

        // right[i] = {segments for suffix s[i..n-1], mask of first segment}
        vector<pair<int,int>> right(n + 1, {0,0});
        count = 1; mask = 0;
        for (int i = n - 1; i >= 0; --i) {
            int num = s[i] - 'a';
            if ((mask >> num) & 1) {
                right[i] = {count, mask};
                continue;
            }
            if (__builtin_popcount(mask) == k) {
                ++count;
                mask = (1 << num);
            } else {
                mask |= (1 << num);
            }
            right[i] = {count, mask};
        }

        // baseline: partitions without any change (left[n] covers full string)
        int res = left[n].first;

        // simulate changing each position to all possible letters
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 26; ++j) {
                if (s[i] - 'a' == j) continue;

                int L = (i > 0) ? left[i].first : 0;
                int LM = (i > 0) ? left[i].second : 0;
                int R = (i < n - 1) ? right[i + 1].first : 0;
                int RM = (i < n - 1) ? right[i + 1].second : 0;

                bool leftExists = (i > 0);
                bool rightExists = (i < n - 1);

                int total = 0;
                int bit = (1 << j);

                if (!leftExists && !rightExists) {
                    total = 1;
                } else if (leftExists && !rightExists) {
                    // only left side exists
                    if (__builtin_popcount(LM | bit) <= k) total = L; // absorbed by left
                    else total = L + 1;
                } else if (!leftExists && rightExists) {
                    // only right side exists
                    if (__builtin_popcount(RM | bit) <= k) total = R; // absorbed by right
                    else total = 1 + R;
                } else {
                    // both sides exist
                    bool mergeLeft = (__builtin_popcount(LM | bit) <= k);
                    bool mergeRight = (__builtin_popcount(RM | bit) <= k);
                    bool mergeBoth = (__builtin_popcount(LM | bit | RM) <= k);

                    if (mergeBoth) {
                        // left last + middle + right first become one
                        total = L + R - 1;
                    } else if (mergeLeft || mergeRight) {
                        // merges with exactly one adjacent segment => no extra segment
                        total = L + R;
                    } else {
                        // middle becomes its own partition
                        total = L + 1 + R;
                    }
                }

                res = max(res, total);
            }
        }

        return res;
    }
};

int main() {
    Solution sol;
    string s = "accca";
    int k = 2;
    cout << sol.maxPartitionsAfterOperations(s, k) << "\n"; // expected: 3
    return 0;
}
