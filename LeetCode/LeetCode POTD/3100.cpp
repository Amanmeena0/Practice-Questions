#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int change = numExchange;
        int drunk = numBottles;  
        int empty = numBottles;
        
        while (empty >= change) {
            empty -= change;   
            empty += 1;        
            drunk += 1;        
            change += 1;       
        }
        return drunk;
    }
};

int main() {
    Solution sol;
    int bottles = 24;
    int exchange = 5;
    cout << sol.maxBottlesDrunk(bottles, exchange) << endl; // prints 28
    return 0;
}
