#include <bits/stdc++.h>
using namespace std;
int main() {
    long long x;
    int num;
    cin >> x >> num;
    //priority_queue is way better to get min and max element dynamically
    priority_queue<long long, vector<long long>, greater<long long>> m;
    for (int i = 0; i < num; i++) {
        long long n;
        cin >> n;
        m.push(n); 
    }
    long long cost = 0;
    while (m.size() > 1) {
        long long s = m.top();
        m.pop();
        long long sec_s = m.top();
        m.pop();
        long long new_stick = s + sec_s;
        cost += new_stick;
        m.push(new_stick);
    }
    cout << cost << endl;
}
