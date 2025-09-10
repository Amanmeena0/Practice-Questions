class Solution
{
public:
    bool isPalindrome(string s)
    {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) 
        {
            if(!isalnum(s[right]) && !isalnum(s[left]))
            {

                if (s[left] != s[right])
                {
                    return false;
                }
                left++;
                right--;
            }
        }
        return true;
    }
};