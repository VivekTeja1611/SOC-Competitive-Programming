#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1'000'000'007;
int main() {
    int n;
    cin >> n;
    vector<long long> sum(n + 1, 0);
    for (int d = 1; d <= n; d++) {
        for (int mul = d; mul <= n; mul += d) {
            sum[mul] = (sum[mul] + d) % MOD;
        }
    }
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = (ans + sum[i]) % MOD;
    }
    cout << ans << "\n";

    return 0;
}
