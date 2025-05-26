#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; 
    cin>>n;
   long long  sum= n*(n+1)/2;
  int x;
  while(n>1){
    cin>>x;
    sum-=x;
    n--;
  }
  cout<<sum<<endl;
}