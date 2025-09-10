#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        long long k, v;  // k steps, final value v
        cin >> k >> v;

        // Work backwards k times to get any valid starting value.
        long long x = v;
        for (long long i = 0; i < k; ++i) {
            if (x % 6 == 4) x = (x - 1) / 3;  // odd predecessor exists
            else x = x * 2;                   // even predecessor always exists
        }
        cout << x << '\n';
    }
    return 0;
}