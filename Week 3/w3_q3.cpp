#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
int n;
vector<int> memo;
int count(int total)
{  if (total == 0) return 1;
   if (total < 0) return 0;    
    if (memo[total] != -1)
           return memo[total];
    int ways = (
           count(total - 1) % MOD + count(total - 2) % MOD+ count(total - 3) % MOD+ count(total - 4) % MOD+ count(total - 5) % MOD+ count(total - 6) % MOD
               ) % MOD;
    memo[total] = ways;
    return ways;
}
int main()
{    cin >> n;
     memo.resize(n + 1, -1);
     cout << count(n) << "\n";
}
