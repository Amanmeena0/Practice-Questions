#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        int first = -1, last = -1;
        int black_count = 0;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                black_count++;
                if (first == -1) {
                    first = i;
                }
                last = i;
            }
        }
        
        if (black_count == 0) {
            cout << 0 << endl;
        } else {
            int length = last - first + 1;
            cout << length - black_count << endl;
        }
    }
    
    return 0;
}