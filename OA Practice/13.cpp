#include <bits/stdc++.h>
using namespace std;
int main() {

    string a,b;
    cin>>a>>b;

    unordered_map<char,int> mpp;

    for(int i= 0; i < a.size();i++){
        mpp[a[i]]= 1;
    }

    for(int i = 0; i < b.size(); i++){
        if(mpp.find(b[i]) != mpp.end()){
            mpp[b[i]] = 0;
        }
    }
    string ans = "";
    for(int i = 0; i < a.size(); i++){
        if(mpp[a[i]] != 0){
            ans += a[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}