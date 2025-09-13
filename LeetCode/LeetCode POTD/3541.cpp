#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFreqSum(string s) {
        
        unordered_map<char,int> mpp;

        int maxlen = 0;
        int maxCons = 0;
        
        for(char c : s){
            mpp[c]++;
        }
        for(auto &c : mpp){
            if(isVowel(c.first)){
                maxlen = max(maxlen, c.second);
            }else{
                maxCons = max(maxCons, c.second);
            }
        }
        return maxlen + maxCons;
    }
    bool isVowel(char c)
    {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
};

int main() {
    Solution sol;

    string s = "successes";

    int result = sol.maxFreqSum(s);

    cout << "Result: " << result << endl;

    return 0;
}