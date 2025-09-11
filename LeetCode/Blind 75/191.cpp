#include <iostream>
using namespace std;
class Solution {
public:
    int hammingWeight(int n) {
        long long count = 0;

        while(n > 0){
            if(n & 1){
                count++;
            }
            n>>= 1;
        }
        return count;
    }
};
int main() {
   Solution sol;
   int n = 11;

   long long result = sol.hammingWeight(n);

   cout<<result;
   
   return 0;
}