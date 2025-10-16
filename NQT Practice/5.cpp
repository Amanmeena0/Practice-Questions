#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // code here
        int n;
        cin >> n;
        int sum = 0;
        int original = n;
        while (original > 0)
        {
            int number = original % 10;
            sum += number;
            original /= 10;
        }

        if (n % sum == 0)
        {
            cout << "Good Number" << endl;
        }
        else
        {
            cout << "Bad Number" << endl;
        }
    }
    return 0;
}