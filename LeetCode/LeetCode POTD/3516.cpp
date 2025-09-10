#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findClosest(int x, int y, int z) {
        long long person1 = abs(x-z);
        long long person2 = abs(y - z);

        if(person1 > person2){
            return 1;
        }else if(person 2 > person1){
            return 2;
        }else{
            return 0;
        }
        return 0;
    }
};
