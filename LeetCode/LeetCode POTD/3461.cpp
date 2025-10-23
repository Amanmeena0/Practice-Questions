#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool hasSameDigits(string s) {
    
        string a = "";
        int i = 0;
        while (2 < s.size()) {
            if (i == s.size() - 1) {
                s = a;
                i = 0;
                a = "";
                continue;
            }

            int curr = s[i] - '0';
            int next = s[i + 1] - '0';

            int newDigit = (curr + next) % 10;

            a += (newDigit + '0');
            i++;
        }
        cout<<s<<endl;
        return s[0] == s[1];
    }
};
int main() {
   Solution sol;
   string s = "3902";
   bool result = sol.hasSameDigits(s);
   cout<< result << endl;
   return 0;
}