#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // code here
        int Goal, Current;
        cin >> Goal >> Current;
        cout << min(Goal - Current, Current) << endl;
    }
    return 0;
}