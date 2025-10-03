#include <bits/stdc++.h>
using namespace std;

int differnce(int n , int m ){
    int div4 = 0;
    int notDiv4 = 0;
    for(int i = 1; i <= m ; i++){
        if(i % n == 0) div4 += i;
        else notDiv4 += i;
    }
    return (notDiv4 > div4) ? notDiv4 - div4 : div4 - notDiv4;
}


int main() {
    int n , m;
    cin>>n>>m;
    cout<<differnce(n,m);
    return 0;
}