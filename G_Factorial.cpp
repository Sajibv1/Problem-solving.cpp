// ﷽
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        unsigned long long fact = 1;
        for (int i = 1; i <= N; i++) {
            fact *= i;
        }

        cout << fact << '\n';
    }
    return 0;
}
