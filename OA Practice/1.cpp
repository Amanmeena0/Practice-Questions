#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    int ratsHome(int r, int unit, int arr[],int n)
    {
      
        
        if(n == 0) return -1;
        
        int totalFood = r * unit;
        
        int count = 0;
        
        for(int i = 0; i < n ; i++){
            if(totalFood<= 0) return count;
            else{
                totalFood -= arr[i];
            }
            count++;
        }
        
        if(totalFood > 0) return 0;

        return count;
    }
};

int main()
{
    Solution sol;
    int r;
    cin>>r;
    int unit;
    cin>>unit;
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }
    cout<<sol.ratsHome(r,unit,arr,n);
    return 0;
}