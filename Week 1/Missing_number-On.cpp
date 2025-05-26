#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
  int  sum=n*(n+1)/2;
  int x;
  while(n>1){
    cin>>x;
    sum-=x;
    n--;
  }
  cout<<sum<<endl;
}