#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int b = n / 3;   // max 3-flower bundles
        int r = n % 3;   // remainder flowers

        int result = 0;

        if (r == 0)
        {
            result = 5 * b;
        }
        else if (r == 1)
        {
            if (b >= 1)
                result = 5 * (b - 1) + 8; // replace one 3-flower bundle with two 2-flower bundles
            else
                result = 4 + 4 + 4; // fallback when n=1 mod 3 but b=0 (like n=1, 4 not possible, but n>=2 in problem)
        }
        else if (r == 2)
        {
            result = 5 * b + 4;
        }

        cout << result << "\n";
    }
    return 0;
}
