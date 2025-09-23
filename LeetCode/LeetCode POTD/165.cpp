#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int compareVersion(string version1, string version2)
    {
        int left = 0;
        int right = 0;
        int size1 = version1.size();
        int size2 = version2.size();
        while (right < size1 || left < size2)
        {
            long v1 = 0, v2 = 0;
            while (right < size1 && version1[right] != '.')
            {
                v1 = v1 * 10 + (version1[right] - '0');
                right++;
            }
            while (left < size2 && version2[left] != '.')
            {
                v2 = v2 * 10 + (version2[left] - '0');
                left++;
            }

            if (v1 < v2)
                return -1;
            if (v2 < v1)
                return 1;

            right = right + 1;
            left = left + 1;
        }
        return 1;
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