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
        vector<int> nums(n);
        for(int i = 0; i < n ;i++){
            cin>>nums[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i + 1; j < n; j++)
            {
                sum = nums[i] +nums[j];

                if(sum % 2 == 0) count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}