#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string sortVowels(string s)
    {
        string t;
        vector<char> vowels;
        for (char i : s)
        {
            if (isVowel(i))
            {
                vowels.push_back(i);
            }
        }
        sort(vowels.begin(), vowels.end());

        int idx = 0;
        
        t = s;

        for (char &i : t)
        {
            if (isVowel(i))
            {
                i = vowels[idx++];
            }
        }

        return t;
    }

    bool isVowel(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }
};

int main()
{
    Solution sol;

    string s = "lEetcOde";

    string result = sol.sortVowels(s);

    cout<<result;
    return 0;
}