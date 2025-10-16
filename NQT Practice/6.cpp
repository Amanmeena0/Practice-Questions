#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int v, w;
        cin >> v >> w;
        
        // Check for impossible conditions
        if (w < 2 * v || w > 4 * v || w % 2 != 0) {
            cout << -1 << endl;
        } else {
            int y = (w - 2 * v) / 2;
            int x = v - y;
            cout << x << " " << y << endl;
        }
    }
    
    return 0;
}