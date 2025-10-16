#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        
        // Calculate total sum
        long long totalSum = 0;
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
            totalSum += nums[i];
        }

        long long leftSum = 0;
        bool found = false;
        
        for (int i = 0; i < n; i++) {
            long long rightSum = totalSum - leftSum - nums[i];
            
            if (leftSum == rightSum) {
                
                cout << i << endl;
                found = true;
                break;
            }
            
            leftSum += nums[i];
        }
        
        if (!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}