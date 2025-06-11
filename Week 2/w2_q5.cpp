#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int median = v[n / 2]; 

    long long total_cost = 0;
    for (int i = 0; i < n; i++) {
        total_cost += abs(v[i] - median);
    }

    cout << total_cost << endl;
    return 0;
}
