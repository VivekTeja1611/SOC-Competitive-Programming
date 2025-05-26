#include <bits/stdc++.h>
using namespace std;
int main(){
    int num_testcases;
    cin>>num_testcases;
    bool found=false;
    for(int i=0;i<num_testcases;i++){
          int n,k;
          cin>>n;cin>>k;
          for(int y=0;y<=n;y++){
               if((n-k*y)%2==0 && (n-k*y)>=0){cout<<"YES"<<endl;found=true; break;}
                             }
          if(found){found=false;continue;}
          else cout<<"No"<<endl;
    }
}