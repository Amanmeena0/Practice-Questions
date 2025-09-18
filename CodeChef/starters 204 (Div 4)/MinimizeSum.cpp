#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        long long minSum = LLONG_MAX;
        
        for (int ops = 0; ops < m; ops++)
        {
            long long currentSum = 0;
            for (int i = 0; i < n; i++)
            {
                currentSum += (arr[i] + ops) % m;
            }
            minSum = min(minSum, currentSum);
        }
        
        cout << minSum << endl;
    }
    return 0;
}


// have to solve this problem again because we are facing error in this pronlem 
// we didnt solve this problem by self use chatbot to solve the problem 
//so thats why we try to solve this problem again 
