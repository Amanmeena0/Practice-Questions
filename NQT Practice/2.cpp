#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int ans = n;
    for(int i = n - 1; i > 0; i--){
        int sum = 0;

        for(int j = 0 ; j< i; j++){
            sum += ans;
            cout<<sum<<endl;
        }
        cout<<"break"<<endl;
        ans = sum;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // code here
        int n;
        cin>>n;
        cout<<fact(n)<<endl;
    }
    return 0;
}