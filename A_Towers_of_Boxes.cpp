#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, d;
        cin >> n >> m >> d;

       
        int can_hold = d / m;

   
        int max_height = can_hold + 1;

   
        int ans = (n + max_height - 1) / max_height;

        cout << ans << endl;
    }
    return 0;
}
