#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    if (!(cin >> T)) return 0;
    while (T--) {
        int n; 
        cin >> n;
        vector<int> p(n), q(n);
        for (int i = 0; i < n; ++i) cin >> p[i];

        for (int i = 0; i < n; ++i)
            q[i] = (n + 1) - p[i];   // complement by value

        for (int i = 0; i < n; ++i) {
            if (i) cout << ' ';
            cout << q[i];
        }
        cout << '\n';
    }
    return 0;
}