// ﷽
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    cin >> n;
    
    long long result;
    if (n % 2 == 0) {
        result = n / 2;
    } else {
        result = -(n + 1) / 2;
    }
    
    cout << result << "\n";
    
    return 0;
}