#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> v1 = split(version1);
        vector<int> v2 = split(version2);

        int n = max(v1.size(), v2.size());
        for (int i = 0; i < n; i++) {
            int num1 = (i < v1.size()) ? v1[i] : 0;
            int num2 = (i < v2.size()) ? v2[i] : 0;
            if (num1 < num2) return -1;
            if (num1 > num2) return 1;
        }
        return 0;
    }

private:
    vector<int> split(string &s) {
        vector<int> res;
        stringstream ss(s);
        string temp;
        while (getline(ss, temp, '.')) {
            res.push_back(stoi(temp));
        }
        return res;
    }
};

int main()
{
    Solution sol;
    string s1 = "1.2", s2 = "1.10";
    int result = sol.compareVersion(s1, s2);
    cout << result << endl;
    return 0;
}