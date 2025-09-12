#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // first approach - brute force
    bool doesAliceWin(string s)
    {
        int numberOFVowels = 0;
        for (char i : s)
        {
            if (isVowel(i))
            {
                cout<< i <<endl;
                numberOFVowels++;
            }

        }
        if (numberOFVowels == 0)
        {
            return false;
        }
        else if (numberOFVowels % 2 != 0)
        {
            return true;
        }
        else
        {
            if ((numberOFVowels - 1) % 2 != 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        return false;
    }

    //secong approch - optimiszed 
    bool DoesAliceWin(const string &s) {
        for (char c : s) {
            if (isVowel(c)) {
                return true;  // Alice wins as soon as we see a vowel
            }
        }
        return false;  // No vowels at all
    }

    bool isVowel(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }
};
int main()
{
    Solution sol;

    string s = "leetcoder";

    bool result = sol.DoesAliceWin(s);

    cout << result;
    return 0;
}