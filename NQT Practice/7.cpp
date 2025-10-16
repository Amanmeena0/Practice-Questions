#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> array(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        if (n == 0) {
            cout << -1 << endl;
            continue;
        }
        string prefix = array[0];
        for (int i = 1; i < n; i++)
        {
            int j = 0;
            while (j < prefix.length() && j < array[i].length() && 
                   prefix[j] == array[i][j])
            {
                j++;
            }
            prefix = prefix.substr(0, j);
            
            if (prefix.empty()) {
                break; 
            }
        }
        cout << prefix << endl;
    }
    return 0;
}