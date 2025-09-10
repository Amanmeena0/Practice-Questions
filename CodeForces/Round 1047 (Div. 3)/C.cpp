#include <bits/stdc++.h>
using namespace std;

static void print_i128(__int128 x) {
    if (x == 0) { cout << 0; return; }
    if (x < 0) { cout << '-'; x = -x; }
    string s;
    while (x) { s.push_back(char('0' + x % 10)); x /= 10; }
    reverse(s.begin(), s.end());
    cout << s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    if (!(cin >> T)) return 0;
    while (T--) {
        long long a, b;
        cin >> a >> b;

        __int128 ans;

        if (b & 1LL) {                   // b is odd
            if (a & 1LL) ans = (__int128)a * b + 1;   // k = b
            else        ans = -1;                      // impossible
        } else {                          // b is even
            if ((b % 4 == 2) && (a & 1LL)) {
                ans = -1;                                 // impossible
            } else {
                ans = (__int128)a * (b / 2) + 2;          // k = b/2
            }
        }

        print_i128(ans);
        cout << '\n';
    }
    return 0;
}