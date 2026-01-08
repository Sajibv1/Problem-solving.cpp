#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (n == 2) {
            cout << min(a[0], a[1]) << "\n";
            continue;
        }
        
        sort(a.begin(), a.end());
        
        long long answer = LLONG_MAX;
        
        for (int i = 0; i < n - 1; i++) {
            long long k = a[i + 1] - a[i];
            answer = min(answer, k);
        }
        
        cout << answer << "\n";
    }
    
    return 0;
}
