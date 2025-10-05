#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cap;
    cin >> cap;
    int n;
    cin >> n;

    int ans = 0;

    if (n % cap == 0)
    {
        ans = n / cap;
    }
    else
    {
        ans = n / cap + 1;
    }

    cout << ans << endl;
    return 0;
}