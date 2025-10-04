#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int lsum = 0;
    int rsum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        rsum += arr[i];
    }
    if (n == 1 || n == 0)
        cout << "NOT FOUND";
        
    int ans = -1;

    for (int i = 1; i <= n; i++)
    {
        rsum -= arr[i];
        if (lsum == rsum)
        {
            ans = i;
            break;
        }
        lsum += arr[i];
    }
    if (ans == -1)
        cout << "NOT FOUND" << endl;
    else
        cout << ans << endl;
    return 0;
}