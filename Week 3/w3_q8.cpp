#include <bits/stdc++.h>
using namespace std;

int main() {
    int l;
    cin >> l;
    vector<long long> original(l);
    for (auto &val : original) {
        cin >> val;
    }
    vector<long long> sorted = original;
    sort(sorted.begin(), sorted.end());

    vector<long long> prev(l), curr(l);
    for (int i = 0; i < l; ++i) {
        prev[i] = abs(original[0] - sorted[i]);
        if (i > 0) {
            prev[i] = min(prev[i], prev[i - 1]);
        }
    }
    for (int i = 1; i < l; ++i) {
        for (int j = 0; j < l; ++j) {
            curr[j] = abs(original[i] - sorted[j]) + prev[j];
            if (j > 0) {
                curr[j] = min(curr[j], curr[j - 1]);
            }
        }
        prev.swap(curr); 
    }

    cout << prev[l - 1] << "\n";
    return 0;
}
