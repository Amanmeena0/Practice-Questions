#include <bits/stdc++.h>
using namespace std;

int CheckPassword(char str[], int n)
{

    if (n < 4)
        return 0;
    int i = 1;
    int charCount = 0;
    int capCount = 0;
    while (n > i)
    {
        if (str[0] >= '0' && str[0] <= '9')
        {
            return 0;
        }
        else
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                charCount++;
                continue;
            }
            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                charCount++;
                capCount++;
                continue;
            }
            else if (str[i] >= '0' && str[i] <= '9')
            {
                continue;
            }
            else if (str[i] == ' ' || str[i] == '/')
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        i++;
        if(charCount >= 4 && capCount >= 1) return 0;
    }
    return 1;
}

int main()
{
    string s;
    getline(cin, s);
    int n = s.size();
    char *str = &s[0];
    cout << CheckPassword(str, n) << endl;
    return 0;
}