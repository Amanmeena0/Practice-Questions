#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> replaceNonCoprimes(vector<int> &nums)
    {
        stack<int> st;
        for (int s : nums)
        {
            st.push(s);
            while (st.size() > 1)
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();

                if (!isCoPrime(a, b))
                {
                    int result = findLCM(a, b);
                    st.push(result);
                }
                else
                {
                    st.push(b);
                    st.push(a);
                    break;
                }
            }
        }
        vector<int> ans;
        while (!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }


    bool isCoPrime(int A, int B)
    {
        return (__gcd(A, B) == 1);
    }

    int findLCM(int A, int B)
    {
        return (1LL * A * B) / (__gcd(A, B));
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {6, 4, 3, 2, 7, 6, 2};
    vector<int> result = sol.replaceNonCoprimes(nums);

    for (int i : result)
    {
        cout << i << endl;
    }
    return 0;
}