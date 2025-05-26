#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    set<int> s;
    int m=n;
   while(m>0){
    s.insert(m);
    m--;
   }
    while(n>1){
        int x;
      cin>>x; 
      s.erase(x);
      n--;
    }
    for(auto x:s){
        cout<<x<<endl;
    }
}