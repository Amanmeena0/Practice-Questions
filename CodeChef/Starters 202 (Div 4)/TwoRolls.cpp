#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int target = 50 - x;
        bool res = (target >= 2 * y && target <= 2 * (y + 5));
        if (res == true)
            cout<< "Yes"<<endl;
        else
            cout<< "No"<<endl;
    }
    return 0;
}