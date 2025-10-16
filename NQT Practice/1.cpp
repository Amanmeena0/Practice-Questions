#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        
        long long even_count = 0, odd_count = 0;
        
        for(int i = 0; i < n; i++) {
            cin >> nums[i];
            if(nums[i] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
        }
        
        long long count = (even_count * (even_count - 1)) / 2 
                            + (odd_count * (odd_count - 1)) / 2;
        
        cout << count << endl;
    }
    return 0;
}