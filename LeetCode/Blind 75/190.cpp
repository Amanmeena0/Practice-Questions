#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverseBits(int n)
    {
        int reverse = 0;
        for (int i = 0; i < 32; i++)
        {
            reverse <<= 1;
            if (n & 1)
            {
                reverse ^= 1;
            }
            n >>= 1;
        }
        return reverse;
    }
};

int main()
{
    Solution obj;

    int n = 43261596;

    int result = obj.reverseBits(n);

    cout << result;

    return 0;
}
