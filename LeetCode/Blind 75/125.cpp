#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int left = 0;
        int right = s.size() - 1;

        while (left < right)
        {
            if (!isalnum(s[right])) {
                right--;
                continue;
            }
            if( !isalnum(s[left]))
            {
                left++;
                continue;
            }
            if (tolower(s[left]) != tolower(s[right]))
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main()
{
    Solution obj;

    string s = "A man, a plan, a canal: Panama";

    bool result = obj.isPalindrome(s);

    cout << result;

    return 0;
}