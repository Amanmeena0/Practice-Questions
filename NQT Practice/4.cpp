#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // code here
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;

        unordered_map<char, int> mpp;

        for (char c : s1)
        {
            mpp[c]++;
        }
        int count = 0;
        for (char c : s2)
        {

            if (mpp.find(c) != mpp.end()){
                count += mpp[c];
            }
        }
        cout<<count<<endl;
    }
    return 0;
}