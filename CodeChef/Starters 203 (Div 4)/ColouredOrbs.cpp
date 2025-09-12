#include <iostream>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
        int R, B;
        cin>>R>>B;
        int k = min(R, B);
        int result = (R - k) * 1 + (B - k) * 2 + k * 5;
        
        cout <<result <<endl;
   }
   return 0;
}