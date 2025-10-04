#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<int> arr(n);
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mpp[arr[i]] = i;  
    }

    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] != 0 && arr[j] != 0 && ( arr[i] * arr[j] <= m)) {  
               
                int third = m / (arr[i] * arr[j]); 
                if (mpp.find(third) != mpp.end()) {
                    if (third != arr[i] && third != arr[j] && mpp[third] > j && mpp[third] > i) {
                        count++;
                    }
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}
