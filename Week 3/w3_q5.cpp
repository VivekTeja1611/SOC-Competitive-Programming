#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e6 + 1;
long long MOD = 1e9 + 7;
vector<long long> ans(MAX); 
void cal()
{
    long long a = 1, b = 1;
    ans[1] = (a + b) % MOD;
    for (int i = 2; i < MAX; i++)
    {        long long x = (2LL * a + b) % MOD;
        long long y = (4LL * b + a) % MOD;
        a = x;
        b = y;
        ans[i] = (a + b) % MOD;
    }
}

int main()
{    cal();
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
        {   int n;
           cin >> n;
           cout << ans[n] << "\n";
       }
}