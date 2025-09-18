#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N, M;
        cin >> N >> M;
        string S;
        cin >> S;

        int aliceWins = count(S.begin(), S.end(), '1');
        int bobWins = M - aliceWins;
        int remaining = N - M;

        int diff = aliceWins - bobWins;
        int val = remaining - diff;

        if (val >= 0 && val % 2 == 0 && val / 2 <= remaining)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
