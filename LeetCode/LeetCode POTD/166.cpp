#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string fractionToDecimal(int numerator, int denominator)
    {
        int n = numerator;
        int d = denominator;
        bool flag = false;
        if ((n < 0 && d > 0) || (n > 0 && d < 0))
        {
            flag = true;
        }

        string ans = "";

        long long a = abs((long long)(n));
        long long b = abs((long long)(d));

        if (a == 0)
        {
            return "0";
        }

        long long int temp = b;
        while (temp % 2 == 0)
            temp /= 2;
        while (temp % 5 == 0)
            temp /= 5;

        if (temp == 1)
        {
            if (a % b == 0)
            {
                if (flag)
                {
                    ans = to_string(a / b);
                    ans = '-' + ans;
                    return ans;
                }
                else
                {
                    ans = to_string(a / b);
                    return ans;
                }
            }

            long long int r = a % b;
            int q = a / b;

            ans += to_string(q);
            ans += '.';
            while (r != 0)
            {
                r = r * 10;
                q = r / b;
                r = r % b;
                ans += to_string(q);
            }
        }
        else
        {
            long long int r = a % b;
            int q = a / b;

            ans += to_string(q);
            ans += '.';
            map<int, int> mp;

            string dum = "";
            int len = 0;

            cout << ans << endl;
            while (mp.find(r) == mp.end())
            {
                mp[r] = len;
                len++;

                r = r * 10;
                q = r / b;
                r = r % b;
                dum += to_string(q);
                cout << dum << endl;
            }
            cout << ans << endl;
            for (int j = 0; j < mp[r]; j++)
            {
                ans += dum[j];
            }
            cout << ans << endl;
            ans += '(';
            for (int j = mp[r]; j < dum.size(); j++)
            {
                ans += dum[j];
            }
            ans += ')';
        }

        if (flag)
            ans = "-" + ans;
        return ans;
    }
};

int main()
{
    Solution sol;

    int n1 = 4, n2 = 333;
    string result = sol.fractionToDecimal(n1, n2);
    cout << result << endl;
    return 0;
}
