#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // code here
        int n, a, b;
        cin >> n >> a >> b;
        int x, y;
        int minDis  = INT_MAX;
        for(int i = 0; i < n;i++){

            cin >> x >> y;
            minDis = min(minDis,(abs(a - x) + abs(b - y)));
        }
        cout<<minDis<<endl;
    }
    return 0;
}