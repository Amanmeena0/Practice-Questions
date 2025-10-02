#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drunk = numBottles;       
        int empty = numBottles;       
        
        while (empty >= numExchange) {
            int newBottles = empty / numExchange;   
            drunk += newBottles;                   
            empty = empty % numExchange + newBottles; 
        }
        return drunk;
    }
};


int main() {
   Solution sol;
   int bottles = 15;
   int exchange  = 4;

   int result = sol.numWaterBottles(bottles,exchange);
   cout<< result << endl;
   return 0;
}