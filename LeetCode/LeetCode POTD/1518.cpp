#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drunk = numBottles;       // initially drink all
        int empty = numBottles;       // those bottles are now empty
        
        while (empty >= numExchange) {
            int newBottles = empty / numExchange;   // how many full we can get
            drunk += newBottles;                   // drink them
            empty = empty % numExchange + newBottles; // remaining empty + newly drunk
        }
        
        return drunk;
    }
};


int main() {
   Solution sol;
   int result = sol;
   cout<< result << endl;
   return 0;
}