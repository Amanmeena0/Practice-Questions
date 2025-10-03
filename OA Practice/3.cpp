#include <bits/stdc++.h>
using namespace std;

int CheckPassword(char str[], int n)
{

    if (n < 4)
        return 0;
    if (str[0] >= '0' && str[0] <= '9')
        return 0;

    int a = 0;
    int cap = 0;
    int nu = 0;
    
    while (a < n)
    {
        if (str[a] == ' ' || str[a] == '/')
        {
            return 0;
        }
        if (str[a] >= 65 && str[a] <= 90)
        {
            cap++;
        }
        else if (str[a] >= '0' && str[a] <= '9')
        {
            nu++;
        }
        a++;
    }
    return cap > 0 && nu > 0;
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