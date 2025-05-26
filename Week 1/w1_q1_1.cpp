#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; 
    cin>>n;
    set<long long> s;
    long long m=n;
   while(m>0){
    s.insert(m);
    m--;
   }
    while(n>1){
        long long x;
      cin>>x; 
      s.erase(x);
      n--;
    }
    for(auto x:s){
        cout<<x<<endl;
    }
}