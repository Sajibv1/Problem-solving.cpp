// ﷽
#include <bits/stdc++.h>
using namespace std;

int main() {
   
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    if (cin >> num) { 
        while (num--) { 
            int n;
            cin >> n;
      
            int temp = n;
            do {
                cout << temp % 10 << " ";
                temp /= 10;
            } while (temp > 0);
            
            cout << "\n"; 
        }
    }
    return 0;
}