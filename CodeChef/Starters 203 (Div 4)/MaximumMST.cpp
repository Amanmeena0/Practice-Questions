#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t>0){
        t--;
        int n;
        cin >> n;
        int size=n*(n-1)/2;

        vector<int>arr(size);
        
        for(int i=0;i<size;i++){
            cin >> arr[i];
        }
        
        int ans;
        
        sort(arr.begin(),arr.end());
        
        if(n<4){
            if(n==2) ans=arr[0];
            if(n==3) ans=arr[0]+arr[1];
        }
        
        if(n>=4){
            ans=arr[0];
            int k=1;
            for(int i=1;i<size;i+=k){
                ans+=arr[i];
                k++;
            }
        }
        cout << ans << endl;
    }

}