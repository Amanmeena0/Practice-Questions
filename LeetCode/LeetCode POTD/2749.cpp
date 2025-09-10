#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int makeTheIntegerZero(int num1, int num2)
    {
        for (long long k = 0; k <= 60; k++)
        {
            long long target = num1 - k * num2;
            if (target < k)
                break;
            long long setBit = countSetBits(target);

            if(setBit <= k){
                return k;
            }
        }
        return -1;
    }
    long long countSetBits(long long n)
    {
        int count = 0;
        while (n > 0)
        {
            n &= (n - 1); 
            count++;
        }
        return count;
    }
};

int main()
{
    Solution obj;

    int x = 112577768, y = -501662198;
    

    int result = obj.makeTheIntegerZero(x, y);

    cout << result;

    return 0;
}