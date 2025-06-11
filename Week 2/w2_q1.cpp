#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int left = 0, right = 0;
    int m = 0;
    set<int> s;

    while (right < v.size()) {
        if (s.find(v[right]) != s.end()) {
            s.erase(v[left]);
            left++;
        } else {
            s.insert(v[right]);
            m = max(m, (int)s.size());
            right++;
        }
    }

    cout << m << endl;
}
