#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
  
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int a, b;
        cin >> a >> b;

        
        if (a <= 0 || b <= 0) return 0;

        int l = min(a, b);
        int h = max(a, b);
        
        int sum = 0;

        for (int i = l; i <= h; i++) {
            sum += i;
            cout << i << " ";
        }
        
        
        cout << "sum =" << sum << endl; 
    }

    return 0;
}