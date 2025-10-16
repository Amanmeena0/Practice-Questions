#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum += ans;
        }
        ans = sum;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // code here
        int n;
        cin >> n;
        cout << fact(n) << endl;
    }
    return 0;
}