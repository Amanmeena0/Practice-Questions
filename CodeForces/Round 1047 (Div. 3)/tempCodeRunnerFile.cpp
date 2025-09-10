#include <bits/stdc++.h>
using namespace std;

void print_int128(int x)
{
    if (x == 0)
    {
        cout << 0;
        return;
    }
    if (x < 0)
    {
        cout << '-';
        x = -x;
    }
    string s;
    while (x)
    {
        s.push_back('0' + x % 10);
        x /= 10;
    }
    reverse(s.begin(), s.end());
    cout << s;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T))
        return 0;
    while (T--)
    {
        long long a, b;
        cin>>a>>b;
        int ans = -1;

        if (b & 1)
        {
            if (a & 1)
                ans = (int)a * b + 1;
            else
                ans = -1;
        }
        else
        {
            if ((b % 4 == 2) && (a & 1))
            {
                ans = -1;
            }
            else
            {
                ans = (int)a * (b / 2) + 2;
            }
        }
        print_int128(ans);
        cout << '\n';
    }
    return 0;
}