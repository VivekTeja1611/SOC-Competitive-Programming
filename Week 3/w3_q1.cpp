#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
int n;
cin >> n;
vector<pair<int, int>> t;
// taking inputs
for (int i = 0; i < n; i++) {
           int a, d;
           cin >> a >> d;
           t.push_back({a, d});}
// sort for greedy algo
sort(t.begin(), t.end());
//long long for some testcases overflow
long long time = 0;   
long long reward = 0;   

for (int i = 0; i < n; i++) {
    int duration = t[i].first;
    int deadline = t[i].second;
    time += duration;reward += (deadline - time);  
}
 cout << reward << endl;
}
