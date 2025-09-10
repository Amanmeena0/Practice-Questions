#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int result;
    if (x > 4)
        result = (x - 4) * 24 + y;
    else
        result = y;

    cout << result << endl;
    return 0;
}
