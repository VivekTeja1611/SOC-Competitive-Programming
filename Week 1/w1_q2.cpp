#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
   char prev_char=s[0];
   char curr_char='\0';
   int curr_len=0;
   int max_len=0;
    for(int i=0;i<s.size();i++){
            curr_char=s[i];
            if(curr_char==prev_char){
                  curr_len++;
                if(curr_len>max_len) max_len=curr_len;
                                    }
            else {curr_len=0;curr_len++;
                              if(curr_len>max_len) max_len=curr_len;  }

            prev_char=s[i];
    }
    cout<<max_len<<endl;
}