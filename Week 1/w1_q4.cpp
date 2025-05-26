#include <bits/stdc++.h>
using namespace std;
int lucky_num(int n){
    int max=0,min=9;
    while(n!=0){
        if(n%10>max)  max=n%10;
        if(n%10<min)min=n%10;
        n=n/10;
    }
    return max-min;
}
int main(){
    // int t;cin>>t;
    // cout<<lucky_num(t);
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int l;int r;
        cin>>l>>r;
        
        int best_num=l;
        int luck=lucky_num(l);
        for(int j=l+1;j<=l+100  && j<=r ;j++){
             if(luck<lucky_num(j)){ luck=lucky_num(j); best_num=j;}
             if(lucky_num(j)==9) break;                                 }

        cout<<best_num<<endl;
    }
}