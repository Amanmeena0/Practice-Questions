#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    if (n == 1) {
        cout << "NO HOURS";
        return 0;
    }

    unordered_map<int, int> mpp;
    long long ans = 0;
    const int mod = 1e9 + 7;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        int a = arr[i] % 60;
        int b = (60 - a) % 60;  
        if (mpp.find(b) != mpp.end()) {
            ans = (ans + mpp[b]) % mod;
        }
        mpp[a]++;
    }

    cout << ans << endl;
    return 0;
}
