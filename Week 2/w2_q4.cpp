#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int> nums, int k) {
    vector<int> ans;
    for (int i = 0; i <= nums.size() - k; i++) {
        vector<int> c(nums.begin() + i, nums.begin() + i + k);
        sort(c.begin(), c.end());
        ans.push_back(c[k - 1]);
    }
    return ans;
}

int main() {
    vector<int> v;
    int x;
    while (cin >> x) {
        v.push_back(x);
    }
    int k = v.back();
    v.pop_back(); 
    vector<int> result = maxSlidingWindow(v, k);
    for (int num : result) cout << num << " ";
    cout << endl;
}
