#include <bits/stdc++.h>
using namespace std;
int edit_distance(string &s1,string &s2){
         int n = s1.length();
         int m = s2.length();
         vector<vector<int>> v;
         v.resize(n + 1, vector<int>(m + 1, 0));
         for (int i = 0; i <= n; i++)
                   {
                     v[i][0] = i;
                             }
         for (int i = 0; i <= m; i++)
             {
             v[0][i] = i;
                        }
     
         for (int i = 1; i <= n; i++)
                {
                   for (int j = 1; j <= m; j++)
                                    {
                                      if (s1[i - 1] == s2[j - 1])
                                      {
                                          v[i][j] = v[i - 1][j - 1];
                                      }
                                      else
                                      {   int in = v[i][j - 1] + 1;
                                          int op = v[i - 1][j] + 1;
                                          int re_op = v[i - 1][j - 1] + 1;
                                          v[i][j] = min(min(op, re_op),in);
                                      }
                                     }
         }
         return  v[n][m];
}
int main()
{    string s1;
    string s2;
    cin >> s1 >> s2;
    cout<<edit_distance(s1,s2)<<endl;
}
