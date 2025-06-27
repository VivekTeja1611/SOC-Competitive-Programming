#include <bits/stdc++.h>
using namespace std;
//to check if the time  is possible or not
bool possible(long long time, const vector<long long>& m, long long t) {
long long total = 0;
for (long long mac : m) {
    total += time / mac;
    if (total >= t) {
        return true; }
    }
    return false; }

int main() {
int n;
long long t;
cin >> n ; 
cin >> t;
vector<long long> m(n);
for (int i = 0; i < n; i++) {
   cin >> m[i];
    }
long long p  = 1;
 long long q  = 1e18; //upper limit for binary search
long long answer = q;
// binary search
while (p <= q ) {
 long long mid = (p + q) / 2;
if (possible(mid, m, t)) {
   answer = mid; 
   q = mid - 1;
} else {
 p = mid + 1; }
}
cout << answer << endl;
}
