#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int k = 1; k < n ; k++){
            int b = n - k;
            if(!hasZero(k) && !hasZero(b)){
                return {k,b};
            }
        }
        return {};
        
    }

    bool hasZero(int n{
        
        while(n > 0){
            if(n % 10 == 0) return true;
            n /= 10;
        }
        return false;
    }
};

