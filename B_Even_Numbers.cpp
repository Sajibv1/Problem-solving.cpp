// ﷽
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n <= 1) {
        cout << -1 << '\n';
        return 0;
    }

    bool printed = false;
    for (int i = 2; i <= n; i += 2) {
        cout << i << '\n';
        printed = true;
    }

    if (!printed) {
        cout << -1 << '\n';
    }

    return 0;
}
