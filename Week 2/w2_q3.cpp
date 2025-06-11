#include <bits/stdc++.h>
using namespace std;

vector<int> threeSum(vector<int>& nums, int target) {
    vector<pair<int, int>> v; 
    for (int i = 0; i < nums.size(); i++) {
        v.push_back({nums[i], i});
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        int fixed = v[i].first;
        int left = i + 1;
        int right = v.size() - 1;
        while (left < right) {
            int sum = fixed + v[left].first + v[right].first;
            if (sum == target) {
                return {v[i].second+1, v[left].second+1, v[right].second+1};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }
    return {-1, -1, -1};
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    vector<int> ans = threeSum(v, x);
    if (ans[0] == -1)
        cout << "IMPOSSIBLE"<<endl;
    else
        cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
}
