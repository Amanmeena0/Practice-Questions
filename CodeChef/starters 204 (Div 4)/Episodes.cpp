#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int hours = 0;
        int min = 0;

        hours = n * k / 60;
        min = (n * k) % 60;

        cout<<hours <<' '<<min<<endl;
    }
    return 0;
}