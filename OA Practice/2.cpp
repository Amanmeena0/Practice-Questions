#include <bits/stdc++.h>
using namespace std;

int OperationsBinaryString(char *str)
{
    if (str == NULL)
        return -1;

    int len = strlen(str);
    
    if (len == 0)
        return -1;

    int result = (str[0] - '0');

    for (int i = 1; i < len; i += 2)
    {
        if (str[i] == 'A')
        {
            result = result & (str[i + 1] - '0');
        }
        else if (str[i] == 'B')
        {
            result = result | (str[i + 1] - '0');
        }
        else if (str[i] == 'C')
        {
            result = result ^ (str[i + 1] - '0');
        }
        else
        {
            return -1;
        }
    }
    return result;
}

int main()
{
    string s;
    getline(cin, s);
    char *str = &s[0];
    cout << OperationsBinaryString(str);
}