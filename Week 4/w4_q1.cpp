#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp %2==1) { 
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp =exp/2; 
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long exp = mod_pow(b, c, MOD - 1);
        long long result = mod_pow(a, exp, MOD);
        cout << result << '\n';
    }

    return 0;
}
